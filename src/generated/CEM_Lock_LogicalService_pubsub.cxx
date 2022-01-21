

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CEM_Lock_LogicalService_pubsub.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "CEM_Lock_LogicalService_pubsub.hpp"
#include "CEM_Lock_LogicalService_pubsubPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- DoorLockReq: 

DoorLockReq::DoorLockReq() :
    m_doorIdx_(Doors::Door_FR_enum) ,
    m_lockCmd_(DoorLockCmd::LockActvnOff)  {
}   

DoorLockReq::DoorLockReq (
    const Doors& doorIdx,
    const DoorLockCmd& lockCmd)
    :
        m_doorIdx_( doorIdx ),
        m_lockCmd_( lockCmd ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
DoorLockReq::DoorLockReq(DoorLockReq&& other_) OMG_NOEXCEPT  :m_doorIdx_ (std::move(other_.m_doorIdx_))
,
m_lockCmd_ (std::move(other_.m_lockCmd_))
{
} 

DoorLockReq& DoorLockReq::operator=(DoorLockReq&&  other_) OMG_NOEXCEPT {
    DoorLockReq tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void DoorLockReq::swap(DoorLockReq& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_doorIdx_, other_.m_doorIdx_);
    swap(m_lockCmd_, other_.m_lockCmd_);
}  

bool DoorLockReq::operator == (const DoorLockReq& other_) const {
    if (m_doorIdx_ != other_.m_doorIdx_) {
        return false;
    }
    if (m_lockCmd_ != other_.m_lockCmd_) {
        return false;
    }
    return true;
}
bool DoorLockReq::operator != (const DoorLockReq& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const DoorLockReq& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "doorIdx: " << sample.doorIdx()<<", ";
    o << "lockCmd: " << sample.lockCmd() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< DoorLockReq > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member DoorLockReq_g_tc_members[2]=
                {

                    {
                        (char *)"doorIdx",/* Member name */
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
                        (char *)"lockCmd",/* Member name */
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

                static DDS_TypeCode DoorLockReq_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"DoorLockReq", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        DoorLockReq_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for DoorLockReq*/

                if (is_initialized) {
                    return &DoorLockReq_g_tc;
                }

                DoorLockReq_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                DoorLockReq_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Doors>::get().native();
                DoorLockReq_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< DoorLockCmd>::get().native();

                /* Initialize the values for member annotations. */
                DoorLockReq_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DoorLockReq_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

                DoorLockReq_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                DoorLockReq_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

                DoorLockReq_g_tc._data._sampleAccessInfo = sample_access_info();
                DoorLockReq_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &DoorLockReq_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                DoorLockReq *sample;

                static RTIXCdrMemberAccessInfo DoorLockReq_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo DoorLockReq_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &DoorLockReq_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    DoorLockReq);
                if (sample == NULL) {
                    return NULL;
                }

                DoorLockReq_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->doorIdx() - (char *)sample);

                DoorLockReq_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->lockCmd() - (char *)sample);

                DoorLockReq_g_sampleAccessInfo.memberAccessInfos = 
                DoorLockReq_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(DoorLockReq);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        DoorLockReq_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        DoorLockReq_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                DoorLockReq_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                DoorLockReq_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< DoorLockReq >;

                DoorLockReq_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &DoorLockReq_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin DoorLockReq_g_typePlugin = 
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

                return &DoorLockReq_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< DoorLockReq >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< DoorLockReq >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< DoorLockReq >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                DoorLockReqPlugin_new,
                DoorLockReqPlugin_delete);
        }

        std::vector<char>& topic_type_support< DoorLockReq >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const DoorLockReq& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = DoorLockReqPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = DoorLockReqPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< DoorLockReq >::from_cdr_buffer(DoorLockReq& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = DoorLockReqPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create DoorLockReq from cdr buffer");
        }

        void topic_type_support< DoorLockReq >::reset_sample(DoorLockReq& sample) 
        {
            sample.doorIdx(Doors::Door_FR_enum);
            sample.lockCmd(DoorLockCmd::LockActvnOff);
        }

        void topic_type_support< DoorLockReq >::allocate_sample(DoorLockReq& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.doorIdx(),  -1, -1);
            ::rti::topic::allocate_sample(sample.lockCmd(),  -1, -1);
        }

    }
}  

