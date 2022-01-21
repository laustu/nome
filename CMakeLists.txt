cmake_minimum_required(VERSION 3.6)
project(vehicle_lock_poc)

set(target_d "aptlock_d")
set(NDDSHOME "/home/x/Codespace/spb/bsp/ti/rti_connext_dds-6.0.1")

if (PLATFORM STREQUAL "arm")
    set(RTI_ARCH "armv8Linux4.4gcc5.4.0")
    include(${PROJECT_SOURCE_DIR}/arm.cmake)
    message("build with arm")
else()
    set(RTI_ARCH "x64Linux4gcc7.3.0")
    message("build with x86")
endif()

add_definitions(-DRTI_UNIX -DRTI_LINUX -DRTI_64BIT -DRTI_STATIC)

set(CMAKE_CXX_STANDARD 11)
set(SRCS ${PROJECT_SOURCE_DIR})

## Env for DDS
include_directories(
    ${NDDSHOME}/include/${RTI_ARCH}
    ${NDDSHOME}/include/${RTI_ARCH}/ndds
    ${NDDSHOME}/include/${RTI_ARCH}/ndds/hpp
)

link_directories(
    ${NDDSHOME}/lib/${RTI_ARCH}
)

## App
include_directories(
    src  src/common
    src/generated
)

aux_source_directory(src SRCS)
aux_source_directory(src/common SRCS)
aux_source_directory(src/generated SRCS)

add_executable(${target_d}
     ${SRCS}
    "src/logic_service.cxx"
)

target_link_libraries(${target_d}
    -ldl -lm -lpthread -lrt
    nddscpp2z nddscz nddscorez
)