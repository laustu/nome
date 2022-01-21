#include <dds/pub/ddspub.hpp>
#include <iostream>
#include <rti/util/util.hpp>  // for sleep()
#include <vector>

#include "CEM_Lock_AtomicService_pubsub.hpp"
#include "CEM_Lock_LogicalService_pubsub.hpp"

const char* kVehicleSpeedTopic = "VechicleSpeed_Topic";
const char* kUsageModeTypeTopic = "UsageModeType_Topic";
const char* kDoorLockStatesTopic = "DoorLockStates_Topic";
const char* kDoorStatesTopic = "DoorStates_Topic";
const char* kGearIndicationTopic = "GearIndication_Topic";
const char* kDoorLockReqTopic = "DoorLockReq_Topic";

using namespace std;

template <class T>
class WriteTemplate {
 public:
  WriteTemplate(dds::domain::DomainParticipant& dp, const char* topic) {
    dds::topic::Topic<T> ddstopic(dp, topic);
    _ptr_writer =
        new dds::pub::DataWriter<T>(dds::pub::Publisher(dp), ddstopic);
  }
  ~WriteTemplate() { delete _ptr_writer; }
  void Write(T t) { _ptr_writer->write(t); }

 private:
  dds::pub::DataWriter<T>* _ptr_writer;
};

void publisher_main(int domain_id) {
  // Create a DomainParticipant with default Qos
  dds::domain::DomainParticipant participant(domain_id);

  // // Create a Topic -- and automatically register the type
  // dds::topic::Topic<VechicleSpeed> topic(participant, kVehicleSpeedTopic);

  // // Create a DataWriter with default Qos (Publisher created in-line)
  // dds::pub::DataWriter<VechicleSpeed> writer(dds::pub::Publisher(participant),
  //                                            topic);
  // VechicleSpeed sample;
  // // Modify the data to be written here
  // int i = 0;
  // while (1) {
  //   std::cout << "Writing VechicleSpeed" << std::endl;
  //   writer.write(sample);
  //   rti::util::sleep(dds::core::Duration(4));
  // }

  WriteTemplate<VechicleSpeed> speed(participant, kVehicleSpeedTopic);
  WriteTemplate<UsageModeType> usage_mode(participant, kUsageModeTypeTopic);
  WriteTemplate<DoorLockStates> lock_states(participant, kDoorLockStatesTopic);
  WriteTemplate<DoorStates> door_states(participant, kDoorStatesTopic);
  WriteTemplate<GearIndication> gear(participant, kGearIndicationTopic);
  VechicleSpeed speed_data(0);
  speed.Write(speed_data);

  UsageModeType usage_mode_data(UsageMode::Inactive);
  usage_mode.Write(usage_mode_data);

  DoorLockStates lock_states_data;
  lock_states_data.FR(DoorLockState::LockSts_Unlckd);
  lock_states_data.FL(DoorLockState::LockSts_Unlckd);
  lock_states.Write(lock_states_data);

  DoorState door_stae(DoorMovement::DoorMovement_Closed, 0);
  DoorStates door_states_data;
  // door_states_data.FR = door_states;
  // door_states_data.FL = door_states;
  // door_states_data.RL = door_states;
  // door_states_data.RR = door_states;
  door_states.Write(door_states_data);

  GearIndication gear_data(GearLvrIndcn::GearLvrIndcn_ParkIndcn);
  gear.Write(gear_data);

  // for DoorLockReq
  WriteTemplate<DoorLockReq> lock_req(participant, kDoorLockReqTopic);
  DoorLockReq lock_req_data;

  std::string input, str;
  std::vector<string> vect_str;
  while (1) {
    getline(cin, input);
    std::stringstream ss(input);
    while (getline(ss, str, ' ')) {
      cout << str << " " << endl;
      vect_str.push_back(str);
    }
    for (int i = 0; i < vect_str.size() - 1; ++i) {
      string tmpstr = vect_str[i];
      if (tmpstr.find("-s") != string::npos) {
        int value = atoi(vect_str[++i].c_str());
        cout << "VechicleSpeed write:" << value << endl;
        speed.Write(VechicleSpeed(value));
      } else if (tmpstr.find("-g") != string::npos) {
        int value = atoi(vect_str[++i].c_str());
        cout << "GearIndication write:" << value << endl;
        gear.Write(GearIndication(value));
      } else if (tmpstr.find("-d") != string::npos) {
        int value = atoi(vect_str[++i].c_str());
        // door_states_data.FR.Movment = value;
        // door_states_data.FL.Movment = value;
        cout << "DoorLockStates write:" << value << endl;
        door_states.Write(door_states_data);
      } else if (tmpstr.find("-u") != string::npos) {
        // usage_mode_data.
        int value = atoi(vect_str[++i].c_str());
        cout << "UsageModeType write: " << value << endl;
        usage_mode.Write(UsageModeType(value));
      } else if (tmpstr.find("-idx") != string::npos ||
                 tmpstr.find("-r") != string::npos) {
        if (tmpstr.find("-idx") != string::npos) {
          uint8_t value = atoi(vect_str[++i].c_str());
          // Doors idx = static_cast<Doors>(value);
          cout << "DoorLockReq door idx: " << value << endl;
          // lock_req_data.doorIdx(idx);
        } else {
          uint8_t value = atoi(vect_str[++i].c_str());
          // DoorLockCmd cmd = static_cast<DoorLockCmd>(value);
          cout << "DoorLockReq write: " << value << endl;
        }

        lock_req_data.doorIdx(Doors::Door_FR_enum);
        lock_req_data.lockCmd(DoorLockCmd::LockActvnUnlck);
        lock_req.Write(lock_req_data);
      } else {
        cout << "DoorLockReq [-idx 0:FR 1:FL 2:RR 3:RL 4:ALL]" << endl;
        cout << "DoorLockReq [-r 1:LockActvnUnlck 2:LockActvnLock]" << endl;
        cout << "GearIndication [-g 0:ParkIn]" << endl;
      }
    }
  }
}



// int main(int argc, char* argv[]) {
//   int domain_id = 0;
//   int sample_count = 0;  // infinite loop

//   if (argc >= 2) {
//     domain_id = atoi(argv[1]);
//   }
//   if (argc >= 3) {
//     sample_count = atoi(argv[2]);
//   }

//   // To turn on additional logging, include <rti/config/Logger.hpp> and
//   // uncomment the following line:
//   // rti::config::Logger::instance().verbosity(rti::config::Verbosity::STATUS_ALL);

//   try {
//     publisher_main(domain_id);
//   } catch (const std::exception& ex) {
//     // This will catch DDS exceptions
//     std::cerr << "Exception in publisher_main(): " << ex.what() << std::endl;
//     return -1;
//   }

//   // RTI Connext provides a finalize_participant_factory() method
//   // if you want to release memory used by the participant factory singleton.
//   // Uncomment the following line to release the singleton:
//   //
//   // dds::domain::DomainParticipant::finalize_participant_factory();

//   return 0;
// }
