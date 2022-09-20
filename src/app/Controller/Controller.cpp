#include "Controller.h"
#include <iostream>

Controller::Controller()
{
    monitor = new Monitor();
}

Controller::~Controller()
{

}

void Controller::updateEvent(DeviceData data)
{
    std::cout << data.devName << " : ";
    for(const auto data : data.devData)
    {
        std::cout << data << " ";
    }
    std::cout << std::endl;
}