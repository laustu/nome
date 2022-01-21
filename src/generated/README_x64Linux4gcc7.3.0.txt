Welcome to your first Connext DDS example! 

This example was generated for architecture x64Linux4gcc7.3.0, using the
data type VechicleSpeed from CEM_Lock_AtomicService_pubsub.idl.
This example builds two applications, named CEM_Lock_AtomicService_pubsub_publisher and
CEM_Lock_AtomicService_pubsub_subscriber.

To Build this example:
======================
 
From your command shell, type:
> make -f makefile_CEM_Lock_AtomicService_pubsub_x64Linux4gcc7.3.0
This command will build a release executable.
 
To build a debug version instead:
> make -f makefile_CEM_Lock_AtomicService_pubsub_x64Linux4gcc7.3.0 DEBUG=1

To Modify the Data:
===================
To modify the data being sent, edit the CEM_Lock_AtomicService_pubsub_publisher.cxx
file where it says:
// Modify the data to be written here

To Run this Example:
====================
Make sure you are in the directory where the USER_QOS_PROFILES.xml file was
generated (the same directory this README file is in).
Run /home/x/rti_connext_dds-6.0.1/resource/scripts/rtisetenv_x64Linux4gcc7.3.0.bash
to make sure the Connext libraries are in the path, especially if you opened
a new command prompt window.
Run the publishing or subscribing application by typing:
> objs/x64Linux4gcc7.3.0/CEM_Lock_AtomicService_pubsub_publisher <domain_id> <sample_count>
> objs/x64Linux4gcc7.3.0/CEM_Lock_AtomicService_pubsub_subscriber <domain_id> <sample_count>
