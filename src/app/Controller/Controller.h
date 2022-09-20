#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__

#include "Monitor.h"
#include "DeviceData.h"

class Controller
{
private:
    Monitor *monitor;

public:
    Controller();
    ~Controller();
    void updateEvent(DeviceData data);


};

#endif