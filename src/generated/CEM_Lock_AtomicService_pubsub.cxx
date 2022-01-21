

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CEM_Lock_AtomicService_pubsub.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "CEM_Lock_AtomicService_pubsub.hpp"
#include "CEM_Lock_AtomicService_pubsubPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

std::ostream& operator << (std::ostream& o,const Doors& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    switch(sample.underlying()){
        case Doors::Door_FR_enum:
        o << "Doors::Door_FR_enum" << " ";
        break;
        case Doors::Door_FL_enum:
        o << "Doors::Door_FL_enum" << " ";
        break;
        case Doors::Door_RR_enum:
        o << "Doors::Door_RR_enum" << " ";
        break;
        case Doors::Door_RL_enum:
        o << "Doors::Door_RL_enum" << " ";
        break;
        case Doors::Door_Trunk_enum:
        o << "Doors::Door_Trunk_enum" << " ";
        break;
        case Doors::Door_Hood_enum:
        o << "Doors::Door_Hood_enum" << " ";
        break;
    }
    return o;
}

std::ostream& operator << (std::ostream& o,const DoorLockCmd& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    switch(sample.underlying()){
        case DoorLockCmd::LockActvnOff:
        o << "DoorLockCmd::LockActvnOff" << " ";
        break;
        case DoorLockCmd::LockActvnUnlck:
        o << "DoorLockCmd::LockActvnUnlck" << " ";
        break;
        case DoorLockCmd::LockActvnLock:
        o << "DoorLockCmd::LockActvnLock" << " ";
        break;
        case DoorLockCmd::LockActvnSafe:
        o << "DoorLockCmd::LockActvnSafe" << " ";
        break;
    }
    return o;
}

// ---- DoorLockMotor: 

DoorLockMotor::DoorLockMotor() :
    m_Door_ (0) ,
    m_LockCmd_ (0) ,
    m_MotorRunTime_ (0)  {
}   

DoorLockMotor::DoorLockMotor (
    int32_t Door,
    int32_t LockCmd,
    uint8_t MotorRunTime)
    :
        m_Door_( Door ),
        m_LockCmd_( LockCmd ),
        m_MotorRunTime_( MotorRunTime ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
DoorLockMotor::DoorLockMotor(DoorLockMotor&& other_) OMG_NOEXCEPT  :m_Door_ (std::move(other_.m_Door_))
,
m_LockCmd_ (std::move(other_.m_LockCmd_))
,
m_MotorRunTime_ (std::move(other_.m_MotorRunTime_))
{
} 

DoorLockMotor& DoorLockMotor::operator=(DoorLockMotor&&  other_) OMG_NOEXCEPT {
    DoorLockMotor tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void DoorLockMotor::swap(DoorLockMotor& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_Door_, other_.m_Door_);
    swap(m_LockCmd_, other_.m_LockCmd_);
    swap(m_MotorRunTime_, other_.m_MotorRunTime_);
}  

bool DoorLockMotor::operator == (const DoorLockMotor& other_) const {
    if (m_Door_ != other_.m_Door_) {
        return false;
    }
    if (m_LockCmd_ != other_.m_LockCmd_) {
        return false;
    }
    if (m_MotorRunTime_ != other_.m_MotorRunTime_) {
        return false;
    }
    return true;
}
bool DoorLockMotor::operator != (const DoorLockMotor& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const DoorLockMotor& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "Door: " << sample.Door()<<", ";
    o << "LockCmd: " << sample.LockCmd()<<", ";
    o << "MotorRunTime: <" << std::hex<<(int)sample.MotorRunTime()  ;
    o <<"]";
    return o;
}

std::ostream& operator << (std::ostream& o,const DoorLockState& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    switch(sample.underlying()){
        case DoorLockState::LockSts_LockStsUkwn:
        o << "DoorLockState::LockSts_LockStsUkwn" << " ";
        break;
        case DoorLockState::LockSts_Unlckd:
        o << "DoorLockState::LockSts_Unlckd" << " ";
        break;
        case DoorLockState::LockSts_Lockd:
        o << "DoorLockState::LockSts_Lockd" << " ";
        break;
        case DoorLockState::LockSts_SafeLockd:
        o << "DoorLockState::LockSts_SafeLockd" << " ";
        break;
    }
    return o;
}

// ---- DoorLockStates: 

DoorLockStates::DoorLockStates() :
    m_FR_ (0) ,
    m_FL_ (0) ,
    m_RR_ (0) ,
    m_RL_ (0) ,
    m_trunk_ (0)  {
}   

DoorLockStates::DoorLockStates (
    int32_t FR,
    int32_t FL,
    int32_t RR,
    int32_t RL,
    int32_t trunk)
    :
        m_FR_( FR ),
        m_FL_( FL ),
        m_RR_( RR ),
        m_RL_( RL ),
        m_trunk_( trunk ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
DoorLockStates::DoorLockStates(DoorLockStates&& other_) OMG_NOEXCEPT  :m_FR_ (std::move(other_.m_FR_))
,
m_FL_ (std::move(other_.m_FL_))
,
m_RR_ (std::move(other_.m_RR_))
,
m_RL_ (std::move(other_.m_RL_))
,
m_trunk_ (std::move(other_.m_trunk_))
{
} 

DoorLockStates& DoorLockStates::operator=(DoorLockStates&&  other_) OMG_NOEXCEPT {
    DoorLockStates tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void DoorLockStates::swap(DoorLockStates& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_FR_, other_.m_FR_);
    swap(m_FL_, other_.m_FL_);
    swap(m_RR_, other_.m_RR_);
    swap(m_RL_, other_.m_RL_);
    swap(m_trunk_, other_.m_trunk_);
}  

bool DoorLockStates::operator == (const DoorLockStates& other_) const {
    if (m_FR_ != other_.m_FR_) {
        return false;
    }
    if (m_FL_ != other_.m_FL_) {
        return false;
    }
    if (m_RR_ != other_.m_RR_) {
        return false;
    }
    if (m_RL_ != other_.m_RL_) {
        return false;
    }
    if (m_trunk_ != other_.m_trunk_) {
        return false;
    }
    return true;
}
bool DoorLockStates::operator != (const DoorLockStates& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const DoorLockStates& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "FR: " << sample.FR()<<", ";
    o << "FL: " << sample.FL()<<", ";
    o << "RR: " << sample.RR()<<", ";
    o << "RL: " << sample.RL()<<", ";
    o << "trunk: " << sample.trunk() ;
    o <<"]";
    return o;
}

std::ostream& operator << (std::ostream& o,const DoorMovement& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    switch(sample.underlying()){
        case DoorMovement::DoorMovement_Open:
        o << "DoorMovement::DoorMovement_Open" << " ";
        break;
        case DoorMovement::DoorMovement_Closed:
        o << "DoorMovement::DoorMovement_Closed" << " ";
        break;
        case DoorMovement::DoorMovement_Moving:
        o << "DoorMovement::DoorMovement_Moving" << " ";
        break;
    }
    return o;
}

// ---- DoorState: 

DoorState::DoorState() :
    m_Movement_ (0) ,
    m_Percentage_ (0)  {
}   

DoorState::DoorState (
    int32_t Movement,
    uint8_t Percentage)
    :
        m_Movement_( Movement ),
        m_Percentage_( Percentage ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
DoorState::DoorState(DoorState&& other_) OMG_NOEXCEPT  :m_Movement_ (std::move(other_.m_Movement_))
,
m_Percentage_ (std::move(other_.m_Percentage_))
{
} 

DoorState& DoorState::operator=(DoorState&&  other_) OMG_NOEXCEPT {
    DoorState tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void DoorState::swap(DoorState& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_Movement_, other_.m_Movement_);
    swap(m_Percentage_, other_.m_Percentage_);
}  

bool DoorState::operator == (const DoorState& other_) const {
    if (m_Movement_ != other_.m_Movement_) {
        return false;
    }
    if (m_Percentage_ != other_.m_Percentage_) {
        return false;
    }
    return true;
}
bool DoorState::operator != (const DoorState& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const DoorState& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "Movement: " << sample.Movement()<<", ";
    o << "Percentage: <" << std::hex<<(int)sample.Percentage()  ;
    o <<"]";
    return o;
}

// ---- DoorStates: 

DoorStates::DoorStates()  {
}   

DoorStates::DoorStates (
    const DoorState& FR,
    const DoorState& FL,
    const DoorState& RR,
    const DoorState& RL,
    const DoorState& trunk,
    const DoorState& hood)
    :
        m_FR_( FR ),
        m_FL_( FL ),
        m_RR_( RR ),
        m_RL_( RL ),
        m_trunk_( trunk ),
        m_hood_( hood ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
DoorStates::DoorStates(DoorStates&& other_) OMG_NOEXCEPT  :m_FR_ (std::move(other_.m_FR_))
,
m_FL_ (std::move(other_.m_FL_))
,
m_RR_ (std::move(other_.m_RR_))
,
m_RL_ (std::move(other_.m_RL_))
,
m_trunk_ (std::move(other_.m_trunk_))
,
m_hood_ (std::move(other_.m_hood_))
{
} 

DoorStates& DoorStates::operator=(DoorStates&&  other_) OMG_NOEXCEPT {
    DoorStates tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void DoorStates::swap(DoorStates& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_FR_, other_.m_FR_);
    swap(m_FL_, other_.m_FL_);
    swap(m_RR_, other_.m_RR_);
    swap(m_RL_, other_.m_RL_);
    swap(m_trunk_, other_.m_trunk_);
    swap(m_hood_, other_.m_hood_);
}  

bool DoorStates::operator == (const DoorStates& other_) const {
    if (m_FR_ != other_.m_FR_) {
        return false;
    }
    if (m_FL_ != other_.m_FL_) {
        return false;
    }
    if (m_RR_ != other_.m_RR_) {
        return false;
    }
    if (m_RL_ != other_.m_RL_) {
        return false;
    }
    if (m_trunk_ != other_.m_trunk_) {
        return false;
    }
    if (m_hood_ != other_.m_hood_) {
        return false;
    }
    return true;
}
bool DoorStates::operator != (const DoorStates& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const DoorStates& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "FR: " << sample.FR()<<", ";
    o << "FL: " << sample.FL()<<", ";
    o << "RR: " << sample.RR()<<", ";
    o << "RL: " << sample.RL()<<", ";
    o << "trunk: " << sample.trunk()<<", ";
    o << "hood: " << sample.hood() ;
    o <<"]";
    return o;
}

std::ostream& operator << (std::ostream& o,const UsageMode& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    switch(sample.underlying()){
        case UsageMode::Abandoned:
        o << "UsageMode::Abandoned" << " ";
        break;
        case UsageMode::Inactive:
        o << "UsageMode::Inactive" << " ";
        break;
        case UsageMode::Convenience:
        o << "UsageMode::Convenience" << " ";
        break;
        case UsageMode::Active:
        o << "UsageMode::Active" << " ";
        break;
        case UsageMode::Driving:
        o << "UsageMode::Driving" << " ";
        break;
    }
    return o;
}

// ---- UsageModeType: 

UsageModeType::UsageModeType() :
    m_Mode_ (0)  {
}   

UsageModeType::UsageModeType (
    int32_t Mode)
    :
        m_Mode_( Mode ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
UsageModeType::UsageModeType(UsageModeType&& other_) OMG_NOEXCEPT  :m_Mode_ (std::move(other_.m_Mode_))
{
} 

UsageModeType& UsageModeType::operator=(UsageModeType&&  other_) OMG_NOEXCEPT {
    UsageModeType tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void UsageModeType::swap(UsageModeType& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_Mode_, other_.m_Mode_);
}  

bool UsageModeType::operator == (const UsageModeType& other_) const {
    if (m_Mode_ != other_.m_Mode_) {
        return false;
    }
    return true;
}
bool UsageModeType::operator != (const UsageModeType& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const UsageModeType& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "Mode: " << sample.Mode() ;
    o <<"]";
    return o;
}

std::ostream& operator << (std::ostream& o,const GearLvrIndcn& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    switch(sample.underlying()){
        case GearLvrIndcn::GearLvrIndcn_ParkIndcn:
        o << "GearLvrIndcn::GearLvrIndcn_ParkIndcn" << " ";
        break;
        case GearLvrIndcn::GearLvrIndcn_RvsIndcn:
        o << "GearLvrIndcn::GearLvrIndcn_RvsIndcn" << " ";
        break;
        case GearLvrIndcn::GearLvrIndcn_NeutIndcn:
        o << "GearLvrIndcn::GearLvrIndcn_NeutIndcn" << " ";
        break;
        case GearLvrIndcn::GearLvrIndcn_DrvIndcn:
        o << "GearLvrIndcn::GearLvrIndcn_DrvIndcn" << " ";
        break;
        case GearLvrIndcn::GearLvrIndcn_ManModeIndcn:
        o << "GearLvrIndcn::GearLvrIndcn_ManModeIndcn" << " ";
        break;
        case GearLvrIndcn::GearLvrIndcn_Resd1:
        o << "GearLvrIndcn::GearLvrIndcn_Resd1" << " ";
        break;
        case GearLvrIndcn::GearLvrIndcn_Resd2:
        o << "GearLvrIndcn::GearLvrIndcn_Resd2" << " ";
        break;
        case GearLvrIndcn::GearLvrIndcn_Undefd:
        o << "GearLvrIndcn::GearLvrIndcn_Undefd" << " ";
        break;
    }
    return o;
}

// ---- GearIndication: 

GearIndication::GearIndication() :
    m_Gear_ (0)  {
}   

GearIndication::GearIndication (
    int32_t Gear)
    :
        m_Gear_( Gear ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
GearIndication::GearIndication(GearIndication&& other_) OMG_NOEXCEPT  :m_Gear_ (std::move(other_.m_Gear_))
{
} 

GearIndication& GearIndication::operator=(GearIndication&&  other_) OMG_NOEXCEPT {
    GearIndication tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void GearIndication::swap(GearIndication& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_Gear_, other_.m_Gear_);
}  

bool GearIndication::operator == (const GearIndication& other_) const {
    if (m_Gear_ != other_.m_Gear_) {
        return false;
    }
    return true;
}
bool GearIndication::operator != (const GearIndication& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const GearIndication& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "Gear: " << sample.Gear() ;
    o <<"]";
    return o;
}

// ---- VechicleSpeed: 

VechicleSpeed::VechicleSpeed() :
    m_VehSpdLgtA_ (0.0f)  {
}   

VechicleSpeed::VechicleSpeed (
    float VehSpdLgtA)
    :
        m_VehSpdLgtA_( VehSpdLgtA ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
VechicleSpeed::VechicleSpeed(VechicleSpeed&& other_) OMG_NOEXCEPT  :m_VehSpdLgtA_ (std::move(other_.m_VehSpdLgtA_))
{
} 

VechicleSpeed& VechicleSpeed::operator=(VechicleSpeed&&  other_) OMG_NOEXCEPT {
    VechicleSpeed tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void VechicleSpeed::swap(VechicleSpeed& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_VehSpdLgtA_, other_.m_VehSpdLgtA_);
}  

bool VechicleSpeed::operator == (const VechicleSpeed& other_) const {
    if (m_VehSpdLgtA_ != other_.m_VehSpdLgtA_) {
        return false;
    }
    return true;
}
bool VechicleSpeed::operator != (const VechicleSpeed& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const VechicleSpeed& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "VehSpdLgtA: " << std::setprecision(9) <<sample.VehSpdLgtA() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< Doors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Doors_g_tc_members[6]=
                {

                    {
                        (char *)"Door_FR_enum",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        Doors::Door_FR_enum, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Door_FL_enum",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        Doors::Door_FL_enum, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Door_RR_enum",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        Doors::Door_RR_enum, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Door_RL_enum",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        Doors::Door_RL_enum, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Door_Trunk_enum",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        Doors::Door_Trunk_enum, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Door_Hood_enum",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        Doors::Door_Hood_enum, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode Doors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"Doors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        Doors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for Doors*/

                if (is_initialized) {
                    return &Doors_g_tc;
                }

                Doors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                Doors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                Doors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                Doors_g_tc._data._sampleAccessInfo = sample_access_info();
                Doors_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &Doors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Doors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Doors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Doors_g_sampleAccessInfo;
                }

                Doors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Doors_g_sampleAccessInfo.memberAccessInfos = 
                Doors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Doors);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        Doors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        Doors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Doors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Doors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< Doors >;

                Doors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Doors_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Doors_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &Doors_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< Doors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Doors >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DoorLockCmd > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DoorLockCmd_g_tc_members[4]=
                {

                    {
                        (char *)"LockActvnOff",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DoorLockCmd::LockActvnOff, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LockActvnUnlck",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DoorLockCmd::LockActvnUnlck, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LockActvnLock",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DoorLockCmd::LockActvnLock, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LockActvnSafe",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DoorLockCmd::LockActvnSafe, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode DoorLockCmd_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DoorLockCmd", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DoorLockCmd_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DoorLockCmd*/

                if (is_initialized) {
                    return &DoorLockCmd_g_tc;
                }

                DoorLockCmd_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                DoorLockCmd_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DoorLockCmd_g_tc._data._annotations._defaultValue._u.long_value = 0;

                DoorLockCmd_g_tc._data._sampleAccessInfo = sample_access_info();
                DoorLockCmd_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DoorLockCmd_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DoorLockCmd_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DoorLockCmd_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DoorLockCmd_g_sampleAccessInfo;
                }

                DoorLockCmd_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DoorLockCmd_g_sampleAccessInfo.memberAccessInfos = 
                DoorLockCmd_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DoorLockCmd);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DoorLockCmd_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DoorLockCmd_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DoorLockCmd_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DoorLockCmd_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DoorLockCmd >;

                DoorLockCmd_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DoorLockCmd_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DoorLockCmd_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &DoorLockCmd_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< DoorLockCmd >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DoorLockCmd >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DoorLockMotor > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DoorLockMotor_g_tc_members[3]=
                {

                    {
                        (char *)"Door",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LockCmd",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"MotorRunTime",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode DoorLockMotor_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DoorLockMotor", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        DoorLockMotor_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DoorLockMotor*/

                if (is_initialized) {
                    return &DoorLockMotor_g_tc;
                }

                DoorLockMotor_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DoorLockMotor_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                DoorLockMotor_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                DoorLockMotor_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                /* Initialize the values for member annotations. */
                DoorLockMotor_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DoorLockMotor_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                DoorLockMotor_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DoorLockMotor_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DoorLockMotor_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DoorLockMotor_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                DoorLockMotor_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DoorLockMotor_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                DoorLockMotor_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DoorLockMotor_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DoorLockMotor_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DoorLockMotor_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                DoorLockMotor_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                DoorLockMotor_g_tc_members[2]._annotations._defaultValue._u.octet_value = 0;
                DoorLockMotor_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                DoorLockMotor_g_tc_members[2]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                DoorLockMotor_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                DoorLockMotor_g_tc_members[2]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                DoorLockMotor_g_tc._data._sampleAccessInfo = sample_access_info();
                DoorLockMotor_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DoorLockMotor_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DoorLockMotor *sample;

                static RTIXCdrMemberAccessInfo DoorLockMotor_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DoorLockMotor_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DoorLockMotor_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DoorLockMotor);
                if (sample == NULL) {
                    return NULL;
                }

                DoorLockMotor_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Door() - (char *)sample);

                DoorLockMotor_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LockCmd() - (char *)sample);

                DoorLockMotor_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->MotorRunTime() - (char *)sample);

                DoorLockMotor_g_sampleAccessInfo.memberAccessInfos = 
                DoorLockMotor_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DoorLockMotor);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DoorLockMotor_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DoorLockMotor_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DoorLockMotor_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DoorLockMotor_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DoorLockMotor >;

                DoorLockMotor_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DoorLockMotor_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DoorLockMotor_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &DoorLockMotor_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DoorLockMotor >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DoorLockMotor >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DoorLockState > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DoorLockState_g_tc_members[4]=
                {

                    {
                        (char *)"LockSts_LockStsUkwn",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DoorLockState::LockSts_LockStsUkwn, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LockSts_Unlckd",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DoorLockState::LockSts_Unlckd, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LockSts_Lockd",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DoorLockState::LockSts_Lockd, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LockSts_SafeLockd",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DoorLockState::LockSts_SafeLockd, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode DoorLockState_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DoorLockState", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        DoorLockState_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DoorLockState*/

                if (is_initialized) {
                    return &DoorLockState_g_tc;
                }

                DoorLockState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                DoorLockState_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DoorLockState_g_tc._data._annotations._defaultValue._u.long_value = 0;

                DoorLockState_g_tc._data._sampleAccessInfo = sample_access_info();
                DoorLockState_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DoorLockState_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DoorLockState_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DoorLockState_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DoorLockState_g_sampleAccessInfo;
                }

                DoorLockState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DoorLockState_g_sampleAccessInfo.memberAccessInfos = 
                DoorLockState_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DoorLockState);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DoorLockState_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DoorLockState_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DoorLockState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DoorLockState_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DoorLockState >;

                DoorLockState_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DoorLockState_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DoorLockState_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &DoorLockState_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< DoorLockState >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DoorLockState >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DoorLockStates > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DoorLockStates_g_tc_members[5]=
                {

                    {
                        (char *)"FR",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FL",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RR",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RL",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"trunk",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode DoorLockStates_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DoorLockStates", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        DoorLockStates_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DoorLockStates*/

                if (is_initialized) {
                    return &DoorLockStates_g_tc;
                }

                DoorLockStates_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DoorLockStates_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                DoorLockStates_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                DoorLockStates_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                DoorLockStates_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                DoorLockStates_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                DoorLockStates_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DoorLockStates_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                DoorLockStates_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DoorLockStates_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DoorLockStates_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DoorLockStates_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                DoorLockStates_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DoorLockStates_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
                DoorLockStates_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DoorLockStates_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DoorLockStates_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DoorLockStates_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                DoorLockStates_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DoorLockStates_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
                DoorLockStates_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DoorLockStates_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DoorLockStates_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DoorLockStates_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                DoorLockStates_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DoorLockStates_g_tc_members[3]._annotations._defaultValue._u.long_value = 0;
                DoorLockStates_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DoorLockStates_g_tc_members[3]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DoorLockStates_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DoorLockStates_g_tc_members[3]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                DoorLockStates_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DoorLockStates_g_tc_members[4]._annotations._defaultValue._u.long_value = 0;
                DoorLockStates_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DoorLockStates_g_tc_members[4]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DoorLockStates_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DoorLockStates_g_tc_members[4]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                DoorLockStates_g_tc._data._sampleAccessInfo = sample_access_info();
                DoorLockStates_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DoorLockStates_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DoorLockStates *sample;

                static RTIXCdrMemberAccessInfo DoorLockStates_g_memberAccessInfos[5] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DoorLockStates_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DoorLockStates_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DoorLockStates);
                if (sample == NULL) {
                    return NULL;
                }

                DoorLockStates_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->FR() - (char *)sample);

                DoorLockStates_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->FL() - (char *)sample);

                DoorLockStates_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RR() - (char *)sample);

                DoorLockStates_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RL() - (char *)sample);

                DoorLockStates_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->trunk() - (char *)sample);

                DoorLockStates_g_sampleAccessInfo.memberAccessInfos = 
                DoorLockStates_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DoorLockStates);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DoorLockStates_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DoorLockStates_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DoorLockStates_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DoorLockStates_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DoorLockStates >;

                DoorLockStates_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DoorLockStates_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DoorLockStates_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &DoorLockStates_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DoorLockStates >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DoorLockStates >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DoorMovement > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DoorMovement_g_tc_members[3]=
                {

                    {
                        (char *)"DoorMovement_Open",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DoorMovement::DoorMovement_Open, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DoorMovement_Closed",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DoorMovement::DoorMovement_Closed, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DoorMovement_Moving",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        DoorMovement::DoorMovement_Moving, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode DoorMovement_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DoorMovement", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        DoorMovement_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DoorMovement*/

                if (is_initialized) {
                    return &DoorMovement_g_tc;
                }

                DoorMovement_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                DoorMovement_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DoorMovement_g_tc._data._annotations._defaultValue._u.long_value = 0;

                DoorMovement_g_tc._data._sampleAccessInfo = sample_access_info();
                DoorMovement_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DoorMovement_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo DoorMovement_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DoorMovement_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DoorMovement_g_sampleAccessInfo;
                }

                DoorMovement_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                DoorMovement_g_sampleAccessInfo.memberAccessInfos = 
                DoorMovement_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DoorMovement);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DoorMovement_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DoorMovement_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DoorMovement_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DoorMovement_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DoorMovement >;

                DoorMovement_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DoorMovement_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DoorMovement_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &DoorMovement_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< DoorMovement >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DoorMovement >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DoorState > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DoorState_g_tc_members[2]=
                {

                    {
                        (char *)"Movement",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Percentage",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode DoorState_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DoorState", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DoorState_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DoorState*/

                if (is_initialized) {
                    return &DoorState_g_tc;
                }

                DoorState_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DoorState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                DoorState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                /* Initialize the values for member annotations. */
                DoorState_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                DoorState_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                DoorState_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                DoorState_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                DoorState_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                DoorState_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                DoorState_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                DoorState_g_tc_members[1]._annotations._defaultValue._u.octet_value = 0;
                DoorState_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                DoorState_g_tc_members[1]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                DoorState_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                DoorState_g_tc_members[1]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                DoorState_g_tc._data._sampleAccessInfo = sample_access_info();
                DoorState_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DoorState_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DoorState *sample;

                static RTIXCdrMemberAccessInfo DoorState_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DoorState_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DoorState_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DoorState);
                if (sample == NULL) {
                    return NULL;
                }

                DoorState_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Movement() - (char *)sample);

                DoorState_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Percentage() - (char *)sample);

                DoorState_g_sampleAccessInfo.memberAccessInfos = 
                DoorState_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DoorState);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DoorState_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DoorState_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DoorState_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DoorState_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DoorState >;

                DoorState_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DoorState_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DoorState_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &DoorState_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DoorState >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DoorState >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DoorStates > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DoorStates_g_tc_members[6]=
                {

                    {
                        (char *)"FR",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"FL",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RR",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RL",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"trunk",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"hood",/* Member name */
                        {
                            5,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode DoorStates_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DoorStates", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        DoorStates_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DoorStates*/

                if (is_initialized) {
                    return &DoorStates_g_tc;
                }

                DoorStates_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DoorStates_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DoorState>::get().native();
                DoorStates_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DoorState>::get().native();
                DoorStates_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DoorState>::get().native();
                DoorStates_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DoorState>::get().native();
                DoorStates_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DoorState>::get().native();
                DoorStates_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DoorState>::get().native();

                /* Initialize the values for member annotations. */

                DoorStates_g_tc._data._sampleAccessInfo = sample_access_info();
                DoorStates_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DoorStates_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DoorStates *sample;

                static RTIXCdrMemberAccessInfo DoorStates_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DoorStates_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DoorStates_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DoorStates);
                if (sample == NULL) {
                    return NULL;
                }

                DoorStates_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->FR() - (char *)sample);

                DoorStates_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->FL() - (char *)sample);

                DoorStates_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RR() - (char *)sample);

                DoorStates_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RL() - (char *)sample);

                DoorStates_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->trunk() - (char *)sample);

                DoorStates_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->hood() - (char *)sample);

                DoorStates_g_sampleAccessInfo.memberAccessInfos = 
                DoorStates_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DoorStates);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DoorStates_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DoorStates_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DoorStates_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DoorStates_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DoorStates >;

                DoorStates_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DoorStates_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DoorStates_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &DoorStates_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DoorStates >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DoorStates >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< UsageMode > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member UsageMode_g_tc_members[5]=
                {

                    {
                        (char *)"Abandoned",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        UsageMode::Abandoned, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Inactive",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        UsageMode::Inactive, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Convenience",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        UsageMode::Convenience, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Active",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        UsageMode::Active, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Driving",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        UsageMode::Driving, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode UsageMode_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UsageMode", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        UsageMode_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for UsageMode*/

                if (is_initialized) {
                    return &UsageMode_g_tc;
                }

                UsageMode_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                UsageMode_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                UsageMode_g_tc._data._annotations._defaultValue._u.long_value = 0;

                UsageMode_g_tc._data._sampleAccessInfo = sample_access_info();
                UsageMode_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &UsageMode_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo UsageMode_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo UsageMode_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &UsageMode_g_sampleAccessInfo;
                }

                UsageMode_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                UsageMode_g_sampleAccessInfo.memberAccessInfos = 
                UsageMode_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UsageMode);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        UsageMode_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        UsageMode_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                UsageMode_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                UsageMode_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UsageMode >;

                UsageMode_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &UsageMode_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin UsageMode_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &UsageMode_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< UsageMode >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UsageMode >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< UsageModeType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member UsageModeType_g_tc_members[1]=
                {

                    {
                        (char *)"Mode",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode UsageModeType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UsageModeType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        UsageModeType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for UsageModeType*/

                if (is_initialized) {
                    return &UsageModeType_g_tc;
                }

                UsageModeType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                UsageModeType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                UsageModeType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                UsageModeType_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                UsageModeType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                UsageModeType_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                UsageModeType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                UsageModeType_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                UsageModeType_g_tc._data._sampleAccessInfo = sample_access_info();
                UsageModeType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &UsageModeType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UsageModeType *sample;

                static RTIXCdrMemberAccessInfo UsageModeType_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo UsageModeType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &UsageModeType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UsageModeType);
                if (sample == NULL) {
                    return NULL;
                }

                UsageModeType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Mode() - (char *)sample);

                UsageModeType_g_sampleAccessInfo.memberAccessInfos = 
                UsageModeType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UsageModeType);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        UsageModeType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        UsageModeType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                UsageModeType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                UsageModeType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UsageModeType >;

                UsageModeType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &UsageModeType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin UsageModeType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &UsageModeType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UsageModeType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UsageModeType >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< GearLvrIndcn > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GearLvrIndcn_g_tc_members[8]=
                {

                    {
                        (char *)"GearLvrIndcn_ParkIndcn",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        GearLvrIndcn::GearLvrIndcn_ParkIndcn, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GearLvrIndcn_RvsIndcn",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        GearLvrIndcn::GearLvrIndcn_RvsIndcn, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GearLvrIndcn_NeutIndcn",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        GearLvrIndcn::GearLvrIndcn_NeutIndcn, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GearLvrIndcn_DrvIndcn",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        GearLvrIndcn::GearLvrIndcn_DrvIndcn, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GearLvrIndcn_ManModeIndcn",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        GearLvrIndcn::GearLvrIndcn_ManModeIndcn, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GearLvrIndcn_Resd1",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        GearLvrIndcn::GearLvrIndcn_Resd1, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GearLvrIndcn_Resd2",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        GearLvrIndcn::GearLvrIndcn_Resd2, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"GearLvrIndcn_Undefd",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        GearLvrIndcn::GearLvrIndcn_Undefd, 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode GearLvrIndcn_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"GearLvrIndcn", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        GearLvrIndcn_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GearLvrIndcn*/

                if (is_initialized) {
                    return &GearLvrIndcn_g_tc;
                }

                GearLvrIndcn_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                GearLvrIndcn_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                GearLvrIndcn_g_tc._data._annotations._defaultValue._u.long_value = 0;

                GearLvrIndcn_g_tc._data._sampleAccessInfo = sample_access_info();
                GearLvrIndcn_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &GearLvrIndcn_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo GearLvrIndcn_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GearLvrIndcn_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GearLvrIndcn_g_sampleAccessInfo;
                }

                GearLvrIndcn_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                GearLvrIndcn_g_sampleAccessInfo.memberAccessInfos = 
                GearLvrIndcn_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(GearLvrIndcn);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        GearLvrIndcn_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        GearLvrIndcn_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GearLvrIndcn_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GearLvrIndcn_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< GearLvrIndcn >;

                GearLvrIndcn_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GearLvrIndcn_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GearLvrIndcn_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &GearLvrIndcn_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< GearLvrIndcn >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< GearLvrIndcn >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< GearIndication > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GearIndication_g_tc_members[1]=
                {

                    {
                        (char *)"Gear",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode GearIndication_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"GearIndication", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GearIndication_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for GearIndication*/

                if (is_initialized) {
                    return &GearIndication_g_tc;
                }

                GearIndication_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                GearIndication_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                GearIndication_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                GearIndication_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
                GearIndication_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                GearIndication_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                GearIndication_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                GearIndication_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                GearIndication_g_tc._data._sampleAccessInfo = sample_access_info();
                GearIndication_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &GearIndication_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                GearIndication *sample;

                static RTIXCdrMemberAccessInfo GearIndication_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo GearIndication_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &GearIndication_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    GearIndication);
                if (sample == NULL) {
                    return NULL;
                }

                GearIndication_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Gear() - (char *)sample);

                GearIndication_g_sampleAccessInfo.memberAccessInfos = 
                GearIndication_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(GearIndication);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        GearIndication_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        GearIndication_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                GearIndication_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                GearIndication_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< GearIndication >;

                GearIndication_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &GearIndication_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin GearIndication_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &GearIndication_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< GearIndication >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< GearIndication >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< VechicleSpeed > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member VechicleSpeed_g_tc_members[1]=
                {

                    {
                        (char *)"VehSpdLgtA",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode VechicleSpeed_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"VechicleSpeed", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        VechicleSpeed_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for VechicleSpeed*/

                if (is_initialized) {
                    return &VechicleSpeed_g_tc;
                }

                VechicleSpeed_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                VechicleSpeed_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                /* Initialize the values for member annotations. */
                VechicleSpeed_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                VechicleSpeed_g_tc_members[0]._annotations._defaultValue._u.float_value = 0.0f;
                VechicleSpeed_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                VechicleSpeed_g_tc_members[0]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                VechicleSpeed_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                VechicleSpeed_g_tc_members[0]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

                VechicleSpeed_g_tc._data._sampleAccessInfo = sample_access_info();
                VechicleSpeed_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &VechicleSpeed_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                VechicleSpeed *sample;

                static RTIXCdrMemberAccessInfo VechicleSpeed_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VechicleSpeed_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VechicleSpeed_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    VechicleSpeed);
                if (sample == NULL) {
                    return NULL;
                }

                VechicleSpeed_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->VehSpdLgtA() - (char *)sample);

                VechicleSpeed_g_sampleAccessInfo.memberAccessInfos = 
                VechicleSpeed_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(VechicleSpeed);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        VechicleSpeed_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        VechicleSpeed_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VechicleSpeed_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VechicleSpeed_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< VechicleSpeed >;

                VechicleSpeed_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VechicleSpeed_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VechicleSpeed_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &VechicleSpeed_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< VechicleSpeed >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< VechicleSpeed >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< DoorLockMotor >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DoorLockMotorPlugin_new,
                DoorLockMotorPlugin_delete);
        }

        std::vector<char>& topic_type_support< DoorLockMotor >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DoorLockMotor& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DoorLockMotorPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DoorLockMotorPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DoorLockMotor >::from_cdr_buffer(DoorLockMotor& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DoorLockMotorPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DoorLockMotor from cdr buffer");
        }

        void topic_type_support< DoorLockMotor >::reset_sample(DoorLockMotor& sample) 
        {
            sample.Door(0);
            sample.LockCmd(0);
            sample.MotorRunTime(0);
        }

        void topic_type_support< DoorLockMotor >::allocate_sample(DoorLockMotor& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

        }

        void topic_type_support< DoorLockStates >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DoorLockStatesPlugin_new,
                DoorLockStatesPlugin_delete);
        }

        std::vector<char>& topic_type_support< DoorLockStates >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DoorLockStates& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DoorLockStatesPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DoorLockStatesPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DoorLockStates >::from_cdr_buffer(DoorLockStates& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DoorLockStatesPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DoorLockStates from cdr buffer");
        }

        void topic_type_support< DoorLockStates >::reset_sample(DoorLockStates& sample) 
        {
            sample.FR(0);
            sample.FL(0);
            sample.RR(0);
            sample.RL(0);
            sample.trunk(0);
        }

        void topic_type_support< DoorLockStates >::allocate_sample(DoorLockStates& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

        }

        void topic_type_support< DoorState >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DoorStatePlugin_new,
                DoorStatePlugin_delete);
        }

        std::vector<char>& topic_type_support< DoorState >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DoorState& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DoorStatePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DoorStatePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DoorState >::from_cdr_buffer(DoorState& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DoorStatePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DoorState from cdr buffer");
        }

        void topic_type_support< DoorState >::reset_sample(DoorState& sample) 
        {
            sample.Movement(0);
            sample.Percentage(0);
        }

        void topic_type_support< DoorState >::allocate_sample(DoorState& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

        }

        void topic_type_support< DoorStates >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DoorStatesPlugin_new,
                DoorStatesPlugin_delete);
        }

        std::vector<char>& topic_type_support< DoorStates >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DoorStates& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DoorStatesPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DoorStatesPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DoorStates >::from_cdr_buffer(DoorStates& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DoorStatesPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DoorStates from cdr buffer");
        }

        void topic_type_support< DoorStates >::reset_sample(DoorStates& sample) 
        {
            ::rti::topic::reset_sample(sample.FR());
            ::rti::topic::reset_sample(sample.FL());
            ::rti::topic::reset_sample(sample.RR());
            ::rti::topic::reset_sample(sample.RL());
            ::rti::topic::reset_sample(sample.trunk());
            ::rti::topic::reset_sample(sample.hood());
        }

        void topic_type_support< DoorStates >::allocate_sample(DoorStates& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.FR(),  -1, -1);
            ::rti::topic::allocate_sample(sample.FL(),  -1, -1);
            ::rti::topic::allocate_sample(sample.RR(),  -1, -1);
            ::rti::topic::allocate_sample(sample.RL(),  -1, -1);
            ::rti::topic::allocate_sample(sample.trunk(),  -1, -1);
            ::rti::topic::allocate_sample(sample.hood(),  -1, -1);
        }

        void topic_type_support< UsageModeType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UsageModeTypePlugin_new,
                UsageModeTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UsageModeType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UsageModeType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = UsageModeTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = UsageModeTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UsageModeType >::from_cdr_buffer(UsageModeType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = UsageModeTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UsageModeType from cdr buffer");
        }

        void topic_type_support< UsageModeType >::reset_sample(UsageModeType& sample) 
        {
            sample.Mode(0);
        }

        void topic_type_support< UsageModeType >::allocate_sample(UsageModeType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

        }

        void topic_type_support< GearIndication >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                GearIndicationPlugin_new,
                GearIndicationPlugin_delete);
        }

        std::vector<char>& topic_type_support< GearIndication >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const GearIndication& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = GearIndicationPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = GearIndicationPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< GearIndication >::from_cdr_buffer(GearIndication& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = GearIndicationPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create GearIndication from cdr buffer");
        }

        void topic_type_support< GearIndication >::reset_sample(GearIndication& sample) 
        {
            sample.Gear(0);
        }

        void topic_type_support< GearIndication >::allocate_sample(GearIndication& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

        }

        void topic_type_support< VechicleSpeed >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                VechicleSpeedPlugin_new,
                VechicleSpeedPlugin_delete);
        }

        std::vector<char>& topic_type_support< VechicleSpeed >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const VechicleSpeed& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = VechicleSpeedPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = VechicleSpeedPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< VechicleSpeed >::from_cdr_buffer(VechicleSpeed& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = VechicleSpeedPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create VechicleSpeed from cdr buffer");
        }

        void topic_type_support< VechicleSpeed >::reset_sample(VechicleSpeed& sample) 
        {
            sample.VehSpdLgtA(0.0f);
        }

        void topic_type_support< VechicleSpeed >::allocate_sample(VechicleSpeed& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

        }

    }
}  

