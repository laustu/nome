#include <iostream>
#include <thread>
#include "door_lock_server.h"
#include "OSAPI.h"

#include<unistd.h>

using namespace std;

int DoorLockLogicServer(DoorLockService *lockSrv) {
    if (lockSrv == NULL) return -1;
    while (1) {
      /* code */
      lockSrv->WaitForDoorLockReq(vehSpeed);
      usleep(100000);
    }
}

int DoorAtomicDataTask(DoorLockService *lockSrv) {
    if (lockSrv == NULL) return -1;

    // lockSrv->SubscribeCEMData();
    VechicleSpeed vehSpeed;
    while (1) {
      /* code */
      lockSrv->WaitForCEMData(vehSpeed);
      usleep(100000);
    }
}

int main(int args, char** argv) {
    DoorLockService lock;

    //wait for the door data from CEM
    std::thread th(DoorLockService, &lock);

    // lock.DoorLockMotorReq()
    th.join();
}