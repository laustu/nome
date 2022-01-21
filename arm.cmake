SET(CMAKE_SYSTEM_NAME Linux)
# SET(CMAKE_SYSTEM_PROCESSOR arm)
SET(CMAKE_CROSSCOMPILING TRUE)
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -Wall -std=c++14")

set(SDK_PATH "/home/x/ti-processor-sdk-linux-j7-evm-07_03_00_05/linux-devkit")
message(${SDK_PATH})

set(tools ${SDK_PATH}/sysroots/x86_64-arago-linux/usr/bin)

SET(CMAKE_SYSROOT ${SDK_PATH}/sysroots/aarch64-linux)
# set(CMAKE_FIND_ROOT_PATH $ENV{SDK_PATH}/sysroots/aarch64-linux)
# set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
# set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
# set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
# set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

include_directories(${CMAKE_SYSROOT}/usr/include)

set(CMAKE_CXX_COMPILER ${tools}/aarch64-none-linux-gnu-g++ CACHE FILEPATH "g++" FORCE)