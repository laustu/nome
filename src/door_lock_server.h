#ifndef _DOOR_LOCK_SERVICE_
#define _DOOR_LOCK_SERVICE_

#include <dds/core/ddscore.hpp>
#include <dds/sub/ddssub.hpp>
#include <rti/util/util.hpp>  // for sleep()
// #include "communicator.hpp"
#include "CEM_Lock_AtomicService_pubsub.hpp"
// #include "CEM_Lock_AtomicService_pubsubSupport.hpp"
#include "CEM_Lock_LogicalService_pubsub.hpp"

// sub topic
const char *kVehicleSpeedTopic = "VechicleSpeed_Topic";
const char *kUsageModeTypeTopic = "UsageModeType_Topic";
const char *kDoorLockStatesTopic = "DoorLockStates_Topic";
const char *kDoorStatesTopic = "DoorStates_Topic";
const char *kGearIndicationTopic = "GearIndication_Topic";
const char *kDoorLockReqTopic = "DoorLockReq_Topic";

// publisher topic
const char *kDoorLockMotorTopic = "DoorLockMotor_Topic";

class DoorLockService {
 public:
  DoorLockService() {}
  DoorLockService(int domain);
  ~DoorLockService();

  int DoorLockMotorReq(DoorLockMotor &data);

  int WaitForDoorLockReq();

  int WaitForCEMData(VechicleSpeed &speed);

 private:
  bool ProcessDoorLockReq();
  int VechicleSpeedProcessData(VechicleSpeed& vehSpeed);

  dds::domain::DomainParticipant *_participant;
  // Logic reader
  dds::sub::DataReader<DoorLockReq> _doorLockReqReader = dds::core::null;
  // Reader for CEM 
  dds::sub::DataReader<VechicleSpeed> _speedReader = dds::core::null;
  dds::sub::DataReader<GearIndication> _gearReader = dds::core::null;
  dds::sub::DataReader<DoorLockStates> _lockStatesReader = dds::core::null;
  dds::sub::DataReader<UsageModeType> _usageModeReader = dds::core::null;
  dds::sub::DataReader<DoorStates> _doorStatesdReader = dds::core::null;
  //Writer for CEM
  dds::pub::DataWriter<DoorLockMotor> _lockMotorWriter = dds::core::null;

  dds::core::cond::WaitSet _waitSet;
  dds::core::cond::StatusCondition *statusCond;

  // sub CEM data
};

#endif