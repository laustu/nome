

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CEM_Lock_AtomicService_pubsub.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CEM_Lock_AtomicService_pubsub_1081086673_hpp
#define CEM_Lock_AtomicService_pubsub_1081086673_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

struct Doors_def {
    enum type {
        Door_FR_enum,      
        Door_FL_enum,      
        Door_RR_enum,      
        Door_RL_enum,      
        Door_Trunk_enum,      
        Door_Hood_enum     
    };
    static type get_default(){ return Door_FR_enum;}
};

typedef ::dds::core::safe_enum< Doors_def > Doors;
NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const Doors& sample);
struct DoorLockCmd_def {
    enum type {
        LockActvnOff,      
        LockActvnUnlck,      
        LockActvnLock,      
        LockActvnSafe     
    };
    static type get_default(){ return LockActvnOff;}
};

typedef ::dds::core::safe_enum< DoorLockCmd_def > DoorLockCmd;
NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const DoorLockCmd& sample);

class NDDSUSERDllExport DoorLockMotor {
  public:
    DoorLockMotor();

    DoorLockMotor(
        int32_t Door,
        int32_t LockCmd,
        uint8_t MotorRunTime);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    DoorLockMotor (DoorLockMotor&&) = default;
    DoorLockMotor& operator=(DoorLockMotor&&) = default;
    DoorLockMotor& operator=(const DoorLockMotor&) = default;
    DoorLockMotor(const DoorLockMotor&) = default;
    #else
    DoorLockMotor(DoorLockMotor&& other_) OMG_NOEXCEPT;  
    DoorLockMotor& operator=(DoorLockMotor&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& Door() OMG_NOEXCEPT {
        return m_Door_;
    }

    const int32_t& Door() const OMG_NOEXCEPT {
        return m_Door_;
    }

    void Door(int32_t value) {
        m_Door_ = value;
    }

    int32_t& LockCmd() OMG_NOEXCEPT {
        return m_LockCmd_;
    }

    const int32_t& LockCmd() const OMG_NOEXCEPT {
        return m_LockCmd_;
    }

    void LockCmd(int32_t value) {
        m_LockCmd_ = value;
    }

    uint8_t& MotorRunTime() OMG_NOEXCEPT {
        return m_MotorRunTime_;
    }

    const uint8_t& MotorRunTime() const OMG_NOEXCEPT {
        return m_MotorRunTime_;
    }

    void MotorRunTime(uint8_t value) {
        m_MotorRunTime_ = value;
    }

    bool operator == (const DoorLockMotor& other_) const;
    bool operator != (const DoorLockMotor& other_) const;

    void swap(DoorLockMotor& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_Door_;
    int32_t m_LockCmd_;
    uint8_t m_MotorRunTime_;

};

inline void swap(DoorLockMotor& a, DoorLockMotor& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DoorLockMotor& sample);

struct DoorLockState_def {
    enum type {
        LockSts_LockStsUkwn,      
        LockSts_Unlckd,      
        LockSts_Lockd,      
        LockSts_SafeLockd     
    };
    static type get_default(){ return LockSts_LockStsUkwn;}
};

typedef ::dds::core::safe_enum< DoorLockState_def > DoorLockState;
NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const DoorLockState& sample);

class NDDSUSERDllExport DoorLockStates {
  public:
    DoorLockStates();

    DoorLockStates(
        int32_t FR,
        int32_t FL,
        int32_t RR,
        int32_t RL,
        int32_t trunk);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    DoorLockStates (DoorLockStates&&) = default;
    DoorLockStates& operator=(DoorLockStates&&) = default;
    DoorLockStates& operator=(const DoorLockStates&) = default;
    DoorLockStates(const DoorLockStates&) = default;
    #else
    DoorLockStates(DoorLockStates&& other_) OMG_NOEXCEPT;  
    DoorLockStates& operator=(DoorLockStates&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& FR() OMG_NOEXCEPT {
        return m_FR_;
    }

    const int32_t& FR() const OMG_NOEXCEPT {
        return m_FR_;
    }

    void FR(int32_t value) {
        m_FR_ = value;
    }

    int32_t& FL() OMG_NOEXCEPT {
        return m_FL_;
    }

    const int32_t& FL() const OMG_NOEXCEPT {
        return m_FL_;
    }

    void FL(int32_t value) {
        m_FL_ = value;
    }

    int32_t& RR() OMG_NOEXCEPT {
        return m_RR_;
    }

    const int32_t& RR() const OMG_NOEXCEPT {
        return m_RR_;
    }

    void RR(int32_t value) {
        m_RR_ = value;
    }

    int32_t& RL() OMG_NOEXCEPT {
        return m_RL_;
    }

    const int32_t& RL() const OMG_NOEXCEPT {
        return m_RL_;
    }

    void RL(int32_t value) {
        m_RL_ = value;
    }

    int32_t& trunk() OMG_NOEXCEPT {
        return m_trunk_;
    }

    const int32_t& trunk() const OMG_NOEXCEPT {
        return m_trunk_;
    }

    void trunk(int32_t value) {
        m_trunk_ = value;
    }

    bool operator == (const DoorLockStates& other_) const;
    bool operator != (const DoorLockStates& other_) const;

    void swap(DoorLockStates& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_FR_;
    int32_t m_FL_;
    int32_t m_RR_;
    int32_t m_RL_;
    int32_t m_trunk_;

};

inline void swap(DoorLockStates& a, DoorLockStates& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DoorLockStates& sample);

struct DoorMovement_def {
    enum type {
        DoorMovement_Open,      
        DoorMovement_Closed,      
        DoorMovement_Moving     
    };
    static type get_default(){ return DoorMovement_Open;}
};

typedef ::dds::core::safe_enum< DoorMovement_def > DoorMovement;
NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const DoorMovement& sample);

class NDDSUSERDllExport DoorState {
  public:
    DoorState();

    DoorState(
        int32_t Movement,
        uint8_t Percentage);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    DoorState (DoorState&&) = default;
    DoorState& operator=(DoorState&&) = default;
    DoorState& operator=(const DoorState&) = default;
    DoorState(const DoorState&) = default;
    #else
    DoorState(DoorState&& other_) OMG_NOEXCEPT;  
    DoorState& operator=(DoorState&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& Movement() OMG_NOEXCEPT {
        return m_Movement_;
    }

    const int32_t& Movement() const OMG_NOEXCEPT {
        return m_Movement_;
    }

    void Movement(int32_t value) {
        m_Movement_ = value;
    }

    uint8_t& Percentage() OMG_NOEXCEPT {
        return m_Percentage_;
    }

    const uint8_t& Percentage() const OMG_NOEXCEPT {
        return m_Percentage_;
    }

    void Percentage(uint8_t value) {
        m_Percentage_ = value;
    }

    bool operator == (const DoorState& other_) const;
    bool operator != (const DoorState& other_) const;

    void swap(DoorState& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_Movement_;
    uint8_t m_Percentage_;

};

inline void swap(DoorState& a, DoorState& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DoorState& sample);

class NDDSUSERDllExport DoorStates {
  public:
    DoorStates();

    DoorStates(
        const DoorState& FR,
        const DoorState& FL,
        const DoorState& RR,
        const DoorState& RL,
        const DoorState& trunk,
        const DoorState& hood);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    DoorStates (DoorStates&&) = default;
    DoorStates& operator=(DoorStates&&) = default;
    DoorStates& operator=(const DoorStates&) = default;
    DoorStates(const DoorStates&) = default;
    #else
    DoorStates(DoorStates&& other_) OMG_NOEXCEPT;  
    DoorStates& operator=(DoorStates&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    DoorState& FR() OMG_NOEXCEPT {
        return m_FR_;
    }

    const DoorState& FR() const OMG_NOEXCEPT {
        return m_FR_;
    }

    void FR(const DoorState& value) {
        m_FR_ = value;
    }

    DoorState& FL() OMG_NOEXCEPT {
        return m_FL_;
    }

    const DoorState& FL() const OMG_NOEXCEPT {
        return m_FL_;
    }

    void FL(const DoorState& value) {
        m_FL_ = value;
    }

    DoorState& RR() OMG_NOEXCEPT {
        return m_RR_;
    }

    const DoorState& RR() const OMG_NOEXCEPT {
        return m_RR_;
    }

    void RR(const DoorState& value) {
        m_RR_ = value;
    }

    DoorState& RL() OMG_NOEXCEPT {
        return m_RL_;
    }

    const DoorState& RL() const OMG_NOEXCEPT {
        return m_RL_;
    }

    void RL(const DoorState& value) {
        m_RL_ = value;
    }

    DoorState& trunk() OMG_NOEXCEPT {
        return m_trunk_;
    }

    const DoorState& trunk() const OMG_NOEXCEPT {
        return m_trunk_;
    }

    void trunk(const DoorState& value) {
        m_trunk_ = value;
    }

    DoorState& hood() OMG_NOEXCEPT {
        return m_hood_;
    }

    const DoorState& hood() const OMG_NOEXCEPT {
        return m_hood_;
    }

    void hood(const DoorState& value) {
        m_hood_ = value;
    }

    bool operator == (const DoorStates& other_) const;
    bool operator != (const DoorStates& other_) const;

    void swap(DoorStates& other_) OMG_NOEXCEPT ;

  private:

    DoorState m_FR_;
    DoorState m_FL_;
    DoorState m_RR_;
    DoorState m_RL_;
    DoorState m_trunk_;
    DoorState m_hood_;

};

inline void swap(DoorStates& a, DoorStates& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DoorStates& sample);

struct UsageMode_def {
    enum type {
        Abandoned,      
        Inactive,      
        Convenience,      
        Active,      
        Driving     
    };
    static type get_default(){ return Abandoned;}
};

typedef ::dds::core::safe_enum< UsageMode_def > UsageMode;
NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const UsageMode& sample);

class NDDSUSERDllExport UsageModeType {
  public:
    UsageModeType();

    explicit UsageModeType(
        int32_t Mode);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    UsageModeType (UsageModeType&&) = default;
    UsageModeType& operator=(UsageModeType&&) = default;
    UsageModeType& operator=(const UsageModeType&) = default;
    UsageModeType(const UsageModeType&) = default;
    #else
    UsageModeType(UsageModeType&& other_) OMG_NOEXCEPT;  
    UsageModeType& operator=(UsageModeType&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& Mode() OMG_NOEXCEPT {
        return m_Mode_;
    }

    const int32_t& Mode() const OMG_NOEXCEPT {
        return m_Mode_;
    }

    void Mode(int32_t value) {
        m_Mode_ = value;
    }

    bool operator == (const UsageModeType& other_) const;
    bool operator != (const UsageModeType& other_) const;

    void swap(UsageModeType& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_Mode_;

};

inline void swap(UsageModeType& a, UsageModeType& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const UsageModeType& sample);

struct GearLvrIndcn_def {
    enum type {
        GearLvrIndcn_ParkIndcn,      
        GearLvrIndcn_RvsIndcn,      
        GearLvrIndcn_NeutIndcn,      
        GearLvrIndcn_DrvIndcn,      
        GearLvrIndcn_ManModeIndcn,      
        GearLvrIndcn_Resd1,      
        GearLvrIndcn_Resd2,      
        GearLvrIndcn_Undefd     
    };
    static type get_default(){ return GearLvrIndcn_ParkIndcn;}
};

typedef ::dds::core::safe_enum< GearLvrIndcn_def > GearLvrIndcn;
NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const GearLvrIndcn& sample);

class NDDSUSERDllExport GearIndication {
  public:
    GearIndication();

    explicit GearIndication(
        int32_t Gear);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    GearIndication (GearIndication&&) = default;
    GearIndication& operator=(GearIndication&&) = default;
    GearIndication& operator=(const GearIndication&) = default;
    GearIndication(const GearIndication&) = default;
    #else
    GearIndication(GearIndication&& other_) OMG_NOEXCEPT;  
    GearIndication& operator=(GearIndication&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& Gear() OMG_NOEXCEPT {
        return m_Gear_;
    }

    const int32_t& Gear() const OMG_NOEXCEPT {
        return m_Gear_;
    }

    void Gear(int32_t value) {
        m_Gear_ = value;
    }

    bool operator == (const GearIndication& other_) const;
    bool operator != (const GearIndication& other_) const;

    void swap(GearIndication& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_Gear_;

};

inline void swap(GearIndication& a, GearIndication& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const GearIndication& sample);

class NDDSUSERDllExport VechicleSpeed {
  public:
    VechicleSpeed();

    explicit VechicleSpeed(
        float VehSpdLgtA);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    VechicleSpeed (VechicleSpeed&&) = default;
    VechicleSpeed& operator=(VechicleSpeed&&) = default;
    VechicleSpeed& operator=(const VechicleSpeed&) = default;
    VechicleSpeed(const VechicleSpeed&) = default;
    #else
    VechicleSpeed(VechicleSpeed&& other_) OMG_NOEXCEPT;  
    VechicleSpeed& operator=(VechicleSpeed&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    float& VehSpdLgtA() OMG_NOEXCEPT {
        return m_VehSpdLgtA_;
    }

    const float& VehSpdLgtA() const OMG_NOEXCEPT {
        return m_VehSpdLgtA_;
    }

    void VehSpdLgtA(float value) {
        m_VehSpdLgtA_ = value;
    }

    bool operator == (const VechicleSpeed& other_) const;
    bool operator != (const VechicleSpeed& other_) const;

    void swap(VechicleSpeed& other_) OMG_NOEXCEPT ;

  private:

    float m_VehSpdLgtA_;

};

inline void swap(VechicleSpeed& a, VechicleSpeed& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const VechicleSpeed& sample);

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< DoorLockMotor > {
            NDDSUSERDllExport static std::string value() {
                return "DoorLockMotor";
            }
        };

        template<>
        struct is_topic_type< DoorLockMotor > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DoorLockMotor > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DoorLockMotor& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DoorLockMotor& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DoorLockMotor& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DoorLockMotor& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DoorLockStates > {
            NDDSUSERDllExport static std::string value() {
                return "DoorLockStates";
            }
        };

        template<>
        struct is_topic_type< DoorLockStates > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DoorLockStates > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DoorLockStates& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DoorLockStates& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DoorLockStates& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DoorLockStates& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DoorState > {
            NDDSUSERDllExport static std::string value() {
                return "DoorState";
            }
        };

        template<>
        struct is_topic_type< DoorState > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DoorState > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DoorState& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DoorState& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DoorState& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DoorState& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< DoorStates > {
            NDDSUSERDllExport static std::string value() {
                return "DoorStates";
            }
        };

        template<>
        struct is_topic_type< DoorStates > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DoorStates > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DoorStates& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DoorStates& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DoorStates& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DoorStates& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< UsageModeType > {
            NDDSUSERDllExport static std::string value() {
                return "UsageModeType";
            }
        };

        template<>
        struct is_topic_type< UsageModeType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< UsageModeType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const UsageModeType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(UsageModeType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(UsageModeType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(UsageModeType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< GearIndication > {
            NDDSUSERDllExport static std::string value() {
                return "GearIndication";
            }
        };

        template<>
        struct is_topic_type< GearIndication > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< GearIndication > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const GearIndication& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(GearIndication& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(GearIndication& sample);

            NDDSUSERDllExport 
            static void allocate_sample(GearIndication& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< VechicleSpeed > {
            NDDSUSERDllExport static std::string value() {
                return "VechicleSpeed";
            }
        };

        template<>
        struct is_topic_type< VechicleSpeed > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< VechicleSpeed > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const VechicleSpeed& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(VechicleSpeed& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(VechicleSpeed& sample);

            NDDSUSERDllExport 
            static void allocate_sample(VechicleSpeed& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Doors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< Doors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DoorLockCmd > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< DoorLockCmd > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DoorLockMotor > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DoorLockMotor > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DoorLockState > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< DoorLockState > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DoorLockStates > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DoorLockStates > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DoorMovement > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< DoorMovement > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DoorState > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DoorState > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DoorStates > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DoorStates > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UsageMode > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< UsageMode > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< UsageModeType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< UsageModeType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< GearLvrIndcn > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };
        #endif

        template <>
        struct extensibility< GearLvrIndcn > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< GearIndication > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< GearIndication > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< VechicleSpeed > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< VechicleSpeed > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // CEM_Lock_AtomicService_pubsub_1081086673_hpp

