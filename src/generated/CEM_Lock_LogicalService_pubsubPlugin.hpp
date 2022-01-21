

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CEM_Lock_LogicalService_pubsub.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CEM_Lock_LogicalService_pubsubPlugin_100116746_h
#define CEM_Lock_LogicalService_pubsubPlugin_100116746_h

#include "CEM_Lock_LogicalService_pubsub.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "CEM_Lock_AtomicService_pubsubPlugin.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#define DoorLockReqPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define DoorLockReqPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DoorLockReqPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define DoorLockReqPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DoorLockReqPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DoorLockReq*
DoorLockReqPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DoorLockReq*
DoorLockReqPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DoorLockReq*
DoorLockReqPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DoorLockReqPluginSupport_copy_data(
    DoorLockReq *out,
    const DoorLockReq *in);

NDDSUSERDllExport extern void 
DoorLockReqPluginSupport_destroy_data_w_params(
    DoorLockReq *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DoorLockReqPluginSupport_destroy_data_ex(
    DoorLockReq *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DoorLockReqPluginSupport_destroy_data(
    DoorLockReq *sample);

NDDSUSERDllExport extern void 
DoorLockReqPluginSupport_print_data(
    const DoorLockReq *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
DoorLockReqPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
DoorLockReqPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
DoorLockReqPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
DoorLockReqPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
DoorLockReqPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoorLockReq *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
DoorLockReqPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoorLockReq *out,
    const DoorLockReq *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
DoorLockReqPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const DoorLockReq *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
DoorLockReqPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    DoorLockReq **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
DoorLockReqPlugin_deserialize_from_cdr_buffer(
    DoorLockReq *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
DoorLockReqPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
DoorLockReqPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DoorLockReqPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DoorLockReqPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DoorLockReqPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    DoorLockReq ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
DoorLockReqPlugin_new(void);

NDDSUSERDllExport extern void
DoorLockReqPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CEM_Lock_LogicalService_pubsubPlugin_100116746_h */

