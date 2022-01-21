

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CEM_Lock_LogicalService_pubsub.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CEM_Lock_LogicalService_pubsub_100116746_hpp
#define CEM_Lock_LogicalService_pubsub_100116746_hpp

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

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "CEM_Lock_AtomicService_pubsub.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

class NDDSUSERDllExport DoorLockReq {
  public:
    DoorLockReq();

    DoorLockReq(
        const Doors& doorIdx,
        const DoorLockCmd& lockCmd);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    DoorLockReq (DoorLockReq&&) = default;
    DoorLockReq& operator=(DoorLockReq&&) = default;
    DoorLockReq& operator=(const DoorLockReq&) = default;
    DoorLockReq(const DoorLockReq&) = default;
    #else
    DoorLockReq(DoorLockReq&& other_) OMG_NOEXCEPT;  
    DoorLockReq& operator=(DoorLockReq&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    Doors& doorIdx() OMG_NOEXCEPT {
        return m_doorIdx_;
    }

    const Doors& doorIdx() const OMG_NOEXCEPT {
        return m_doorIdx_;
    }

    void doorIdx(const Doors& value) {
        m_doorIdx_ = value;
    }

    DoorLockCmd& lockCmd() OMG_NOEXCEPT {
        return m_lockCmd_;
    }

    const DoorLockCmd& lockCmd() const OMG_NOEXCEPT {
        return m_lockCmd_;
    }

    void lockCmd(const DoorLockCmd& value) {
        m_lockCmd_ = value;
    }

    bool operator == (const DoorLockReq& other_) const;
    bool operator != (const DoorLockReq& other_) const;

    void swap(DoorLockReq& other_) OMG_NOEXCEPT ;

  private:

    Doors m_doorIdx_;
    DoorLockCmd m_lockCmd_;

};

inline void swap(DoorLockReq& a, DoorLockReq& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const DoorLockReq& sample);

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< DoorLockReq > {
            NDDSUSERDllExport static std::string value() {
                return "DoorLockReq";
            }
        };

        template<>
        struct is_topic_type< DoorLockReq > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< DoorLockReq > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const DoorLockReq& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(DoorLockReq& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(DoorLockReq& sample);

            NDDSUSERDllExport 
            static void allocate_sample(DoorLockReq& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< DoorLockReq > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< DoorLockReq > {
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

#endif // CEM_Lock_LogicalService_pubsub_100116746_hpp

