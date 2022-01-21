#include <vector>
#include <iostream>
#include <sstream>
#include "door_lock_server.h"

// using std;

DoorLockService::DoorLockService(int domain) {
// _communicator = new Communicator();
    _participant = TheParticipantFactory->create_participant(
      domain, PARTICIPANT_QOS_DEFAULT, NULL, STATUS_MASK_NONE);

    if (_participant == NULL) {
      std::stringstream errss;
      errss << "Failed to create DomainParticipant object";
      throw errss.str();
    }

    // Create a DataWriter with default Qos (Publisher created in-line)
    dds::topic::Topic<DoorLockMotor> pubTopic(*_participant,
                                              kDoorLockMotorTopic);
    _lockMotorWriter = new dds::pub::DataWriter<DoorLockMotor>(
        dds::pub::Publisher(*_participant), pubTopic);
    if (_doorLockMotorWriter == NULL) {
      std::stringstream errss;
      errss << "Failed to create doorLockMotor writer";
      throw errss.str();
    }

    // createt reader for DoorLockReq
    auto reqTopic = dds::topic::Topic<DoorLockReq>(*_participant, 
                                      kDoorLockReqTopic);
    _doorLockReqReader = dds::sub::DataReader<DoorLockReq>(
        dds::sub::Subscriber(*_participant), reqTopic);

    // Use this status condition to wake up the thread when data becomes
    // available
    statusCond = new dds::core::cond::StatusCondition(_reader);
    statusCond->enabled_statuses(dds::core::status::StatusMask(
            dds::core::status::StatusMask::data_available()));

    dds::topic::Topic<VechicleSpeed> topic(*_participant,
                                           "VechicleSpeed_Topic");
    _speedReader = dds::sub::DataReader<VechicleSpeed>(
        dds::sub::Subscriber(*_participant), topic);

    statusCond = new dds::core::cond::StatusCondition(_speedReader);
    statusCond->enabled_statuses(dds::core::status::StatusMask(
        dds::core::status::StatusMask::data_available()));

    // Attaching the condition to the WaitSet
    _waitSet += *statusCond;
}

DoorLockService::~DoorLockService() {
  delete _participant;
  delete _doorLockMotorWriter;
  delete _doorLockReqReader;
}

int DoorLockService::VechicleSpeedProcessData(VechicleSpeed& vehSpeed) {
  // Take all samples
  dds::sub::LoanedSamples<VechicleSpeed> samples = _speedReader.take();
  for (const auto& sample : samples) {
    if (sample.info().valid()) {
      std::cout << sample.data() << std::endl;
      vehSpeed = sample.data();
    }
  }

  return 1;
}  // The LoanedSamples destructor returns the loan

// int DoorLockService::GearProcessData(dds::sub::DataReader<GearIndication>& reader) {
//   dds::sub::LoanedSamples<GearIndication> samples = reader.take();
//   if (sample.info().valid()) {
//     std::cout << sample.data() << std::endl;
//   }
//   return 1;
// }

int DoorLockService::DoorLockMotorReq(DoorLockMotor &data) {
  if (_doorLockMotorWriter == NULL) return -1;
  _doorLockMotorWriter->write(data);
  return 1;
}

bool DoorLockService::ProcessDoorLockReq() {
  bool haveReq = false;
  DoorLockReq doorLock;

  dds::sub::LoanedSamples<DoorLockReq> samples = _doorLockReqReader.take();
  for (auto sample : samples) {
    if (sample.info().valid()) {
      std::cout << sample.data() << std::endl;
      doorLock = DoorLockReq(sample.data());
      DoorLockMotor motorData(doorLock.doorIdx(), doorlock.lockCmd(), 0));
      DoorLockMotorReq(motorData);
      haveReq = true;
    }
  }
  return haveReq;
}

int DoorLockService::WaitForDoorLockReq() {
  dds::core::cond::WaitSet::ConditionSeq active =
      _waitSet.wait(dds::core::Duration::from_secs(4));

  if (active[i] == *statusCond) {
    ProcessDoorLockReq();
  }
  return 1;
}

void DoorLockService::SubscribeCEMData() {
      // process gear
  // dds::topic::Topic<GearIndication> gearTopic(participant,
  //                                             "GearIndication_Topic");

  // // Create a DataReader with default Qos (Subscriber created in-line)
  // dds::sub::DataReader<GearIndication> gearReader(
  //     dds::sub::Subscriber(participant), gearTopic);
  // dds::sub::cond::ReadCondition gearReadCond(
  //     gearReader, dds::sub::status::DataState::any(),
  //     [&gearReader](/* dds::core::cond::Condition condition */) {
  //       GearProcessData(gearReader);
  //     });

  _waitSet += speedReadCond;
  // _waitSet += gearReadCond;
}

int DoorLockService::WaitForCEMData(VechicleSpeed &speed) {
    // Create a WaitSet and attach the ReadCondition
    // dds::core::cond::WaitSet waitset;
    // waitset += read_condition;
    // waitset += gear_read_condition;
    std::cout << "VechicleSpeed subscriber sleeping for 4 sec..." << std::endl;
    dds::core::cond::WaitSet::ConditionSeq active =
        _waitSet.wait(dds::core::Duration::from_secs(4));
    if (active == *statusCond) {
      VechicleSpeedProcessData(speed);
    }

    // while (count < sample_count || sample_count == 0) {
    //   // Dispatch will call the handlers associated to the WaitSet conditions
    //   // when they activate
    // }
    return 1;
}