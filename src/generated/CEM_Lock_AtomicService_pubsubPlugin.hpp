

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CEM_Lock_AtomicService_pubsub.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CEM_Lock_AtomicService_pubsubPlugin_1081086673_h
#define CEM_Lock_AtomicService_pubsubPlugin_1081086673_h

#include "CEM_Lock_AtomicService_pubsub.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
DoorsPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
DoorsPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DoorsPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
DoorsPluginSupport_print_data(
    const Doors *sample, const char *desc, int indent_level);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
DoorLockCmdPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
DoorLockCmdPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DoorLockCmdPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
DoorLockCmdPluginSupport_print_data(
    const DoorLockCmd *sample, const char *desc, int indent_level);

#define DoorLockMotorPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define DoorLockMotorPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DoorLockMotorPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define DoorLockMotorPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DoorLockMotorPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DoorLockMotor*
DoorLockMotorPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DoorLockMotor*
DoorLockMotorPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DoorLockMotor*
DoorLockMotorPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DoorLockMotorPluginSupport_copy_data(
    DoorLockMotor *out,
    const DoorLockMotor *in);

NDDSUSERDllExport extern void 
DoorLockMotorPluginSupport_destroy_data_w_params(
    DoorLockMotor *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DoorLockMotorPluginSupport_destroy_data_ex(
    DoorLockMotor *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DoorLockMotorPluginSupport_destroy_data(
    DoorLockMotor *sample);

NDDSUSERDllExport extern void 
DoorLockMotorPluginSupport_print_data(
    const DoorLockMotor *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
DoorLockMotorPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
DoorLockMotorPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
DoorLockMotorPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
DoorLockMotorPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
DoorLockMotorPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoorLockMotor *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
DoorLockMotorPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoorLockMotor *out,
    const DoorLockMotor *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
DoorLockMotorPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const DoorLockMotor *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
DoorLockMotorPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    DoorLockMotor **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
DoorLockMotorPlugin_deserialize_from_cdr_buffer(
    DoorLockMotor *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
DoorLockMotorPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
DoorLockMotorPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DoorLockMotorPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DoorLockMotorPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DoorLockMotorPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    DoorLockMotor ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
DoorLockMotorPlugin_new(void);

NDDSUSERDllExport extern void
DoorLockMotorPlugin_delete(struct PRESTypePlugin *);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
DoorLockStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
DoorLockStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DoorLockStatePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
DoorLockStatePluginSupport_print_data(
    const DoorLockState *sample, const char *desc, int indent_level);

#define DoorLockStatesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define DoorLockStatesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DoorLockStatesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define DoorLockStatesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DoorLockStatesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DoorLockStates*
DoorLockStatesPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DoorLockStates*
DoorLockStatesPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DoorLockStates*
DoorLockStatesPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DoorLockStatesPluginSupport_copy_data(
    DoorLockStates *out,
    const DoorLockStates *in);

NDDSUSERDllExport extern void 
DoorLockStatesPluginSupport_destroy_data_w_params(
    DoorLockStates *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DoorLockStatesPluginSupport_destroy_data_ex(
    DoorLockStates *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DoorLockStatesPluginSupport_destroy_data(
    DoorLockStates *sample);

NDDSUSERDllExport extern void 
DoorLockStatesPluginSupport_print_data(
    const DoorLockStates *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
DoorLockStatesPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
DoorLockStatesPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
DoorLockStatesPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
DoorLockStatesPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
DoorLockStatesPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoorLockStates *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
DoorLockStatesPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoorLockStates *out,
    const DoorLockStates *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
DoorLockStatesPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const DoorLockStates *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
DoorLockStatesPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    DoorLockStates **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
DoorLockStatesPlugin_deserialize_from_cdr_buffer(
    DoorLockStates *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
DoorLockStatesPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
DoorLockStatesPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DoorLockStatesPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DoorLockStatesPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DoorLockStatesPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    DoorLockStates ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
DoorLockStatesPlugin_new(void);

NDDSUSERDllExport extern void
DoorLockStatesPlugin_delete(struct PRESTypePlugin *);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
DoorMovementPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
DoorMovementPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DoorMovementPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
DoorMovementPluginSupport_print_data(
    const DoorMovement *sample, const char *desc, int indent_level);

#define DoorStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define DoorStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DoorStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define DoorStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DoorStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DoorState*
DoorStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DoorState*
DoorStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DoorState*
DoorStatePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DoorStatePluginSupport_copy_data(
    DoorState *out,
    const DoorState *in);

NDDSUSERDllExport extern void 
DoorStatePluginSupport_destroy_data_w_params(
    DoorState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DoorStatePluginSupport_destroy_data_ex(
    DoorState *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DoorStatePluginSupport_destroy_data(
    DoorState *sample);

NDDSUSERDllExport extern void 
DoorStatePluginSupport_print_data(
    const DoorState *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
DoorStatePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
DoorStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
DoorStatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
DoorStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
DoorStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoorState *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
DoorStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoorState *out,
    const DoorState *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
DoorStatePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const DoorState *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
DoorStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    DoorState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
DoorStatePlugin_deserialize_from_cdr_buffer(
    DoorState *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
DoorStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
DoorStatePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DoorStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DoorStatePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DoorStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    DoorState ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
DoorStatePlugin_new(void);

NDDSUSERDllExport extern void
DoorStatePlugin_delete(struct PRESTypePlugin *);

#define DoorStatesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define DoorStatesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DoorStatesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define DoorStatesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DoorStatesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DoorStates*
DoorStatesPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DoorStates*
DoorStatesPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DoorStates*
DoorStatesPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DoorStatesPluginSupport_copy_data(
    DoorStates *out,
    const DoorStates *in);

NDDSUSERDllExport extern void 
DoorStatesPluginSupport_destroy_data_w_params(
    DoorStates *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DoorStatesPluginSupport_destroy_data_ex(
    DoorStates *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DoorStatesPluginSupport_destroy_data(
    DoorStates *sample);

NDDSUSERDllExport extern void 
DoorStatesPluginSupport_print_data(
    const DoorStates *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
DoorStatesPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
DoorStatesPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
DoorStatesPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
DoorStatesPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
DoorStatesPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoorStates *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
DoorStatesPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoorStates *out,
    const DoorStates *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
DoorStatesPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const DoorStates *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
DoorStatesPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    DoorStates **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
DoorStatesPlugin_deserialize_from_cdr_buffer(
    DoorStates *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
DoorStatesPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
DoorStatesPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DoorStatesPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DoorStatesPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DoorStatesPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    DoorStates ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
DoorStatesPlugin_new(void);

NDDSUSERDllExport extern void
DoorStatesPlugin_delete(struct PRESTypePlugin *);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
UsageModePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
UsageModePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
UsageModePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
UsageModePluginSupport_print_data(
    const UsageMode *sample, const char *desc, int indent_level);

#define UsageModeTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define UsageModeTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define UsageModeTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define UsageModeTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define UsageModeTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern UsageModeType*
UsageModeTypePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern UsageModeType*
UsageModeTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern UsageModeType*
UsageModeTypePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
UsageModeTypePluginSupport_copy_data(
    UsageModeType *out,
    const UsageModeType *in);

NDDSUSERDllExport extern void 
UsageModeTypePluginSupport_destroy_data_w_params(
    UsageModeType *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
UsageModeTypePluginSupport_destroy_data_ex(
    UsageModeType *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
UsageModeTypePluginSupport_destroy_data(
    UsageModeType *sample);

NDDSUSERDllExport extern void 
UsageModeTypePluginSupport_print_data(
    const UsageModeType *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
UsageModeTypePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
UsageModeTypePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
UsageModeTypePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
UsageModeTypePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
UsageModeTypePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    UsageModeType *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
UsageModeTypePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UsageModeType *out,
    const UsageModeType *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
UsageModeTypePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const UsageModeType *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
UsageModeTypePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    UsageModeType **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
UsageModeTypePlugin_deserialize_from_cdr_buffer(
    UsageModeType *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
UsageModeTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
UsageModeTypePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
UsageModeTypePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
UsageModeTypePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
UsageModeTypePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    UsageModeType ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
UsageModeTypePlugin_new(void);

NDDSUSERDllExport extern void
UsageModeTypePlugin_delete(struct PRESTypePlugin *);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
GearLvrIndcnPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
GearLvrIndcnPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
GearLvrIndcnPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
GearLvrIndcnPluginSupport_print_data(
    const GearLvrIndcn *sample, const char *desc, int indent_level);

#define GearIndicationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define GearIndicationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define GearIndicationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define GearIndicationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define GearIndicationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern GearIndication*
GearIndicationPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern GearIndication*
GearIndicationPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern GearIndication*
GearIndicationPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
GearIndicationPluginSupport_copy_data(
    GearIndication *out,
    const GearIndication *in);

NDDSUSERDllExport extern void 
GearIndicationPluginSupport_destroy_data_w_params(
    GearIndication *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
GearIndicationPluginSupport_destroy_data_ex(
    GearIndication *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
GearIndicationPluginSupport_destroy_data(
    GearIndication *sample);

NDDSUSERDllExport extern void 
GearIndicationPluginSupport_print_data(
    const GearIndication *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
GearIndicationPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
GearIndicationPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
GearIndicationPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
GearIndicationPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
GearIndicationPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    GearIndication *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
GearIndicationPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    GearIndication *out,
    const GearIndication *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
GearIndicationPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const GearIndication *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
GearIndicationPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    GearIndication **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
GearIndicationPlugin_deserialize_from_cdr_buffer(
    GearIndication *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
GearIndicationPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
GearIndicationPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
GearIndicationPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
GearIndicationPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
GearIndicationPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    GearIndication ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
GearIndicationPlugin_new(void);

NDDSUSERDllExport extern void
GearIndicationPlugin_delete(struct PRESTypePlugin *);

#define VechicleSpeedPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define VechicleSpeedPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define VechicleSpeedPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define VechicleSpeedPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define VechicleSpeedPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern VechicleSpeed*
VechicleSpeedPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern VechicleSpeed*
VechicleSpeedPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern VechicleSpeed*
VechicleSpeedPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
VechicleSpeedPluginSupport_copy_data(
    VechicleSpeed *out,
    const VechicleSpeed *in);

NDDSUSERDllExport extern void 
VechicleSpeedPluginSupport_destroy_data_w_params(
    VechicleSpeed *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
VechicleSpeedPluginSupport_destroy_data_ex(
    VechicleSpeed *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
VechicleSpeedPluginSupport_destroy_data(
    VechicleSpeed *sample);

NDDSUSERDllExport extern void 
VechicleSpeedPluginSupport_print_data(
    const VechicleSpeed *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
VechicleSpeedPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
VechicleSpeedPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
VechicleSpeedPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
VechicleSpeedPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
VechicleSpeedPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    VechicleSpeed *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
VechicleSpeedPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    VechicleSpeed *out,
    const VechicleSpeed *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
VechicleSpeedPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const VechicleSpeed *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
VechicleSpeedPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    VechicleSpeed **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
VechicleSpeedPlugin_deserialize_from_cdr_buffer(
    VechicleSpeed *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
VechicleSpeedPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
VechicleSpeedPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
VechicleSpeedPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
VechicleSpeedPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
VechicleSpeedPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    VechicleSpeed ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
VechicleSpeedPlugin_new(void);

NDDSUSERDllExport extern void
VechicleSpeedPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* CEM_Lock_AtomicService_pubsubPlugin_1081086673_h */

