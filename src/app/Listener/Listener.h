#ifndef __LISTENER_H__
#define __LISTENER_H__

#include "CardReader.h"
#include "Monitor.h"
#include "Controller.h"
#include "wiringPi.h"
#include <iostream>

class Listener
{
private:
    CardReader *rfid;
    Controller *controller;
    uint8_t rfidData[16];
    

public:
    Listener();
    ~Listener();
    void checkEvent();
    bool checkRfid();


};

#endif