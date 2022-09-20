#ifndef __MONITOR_H__
#define __MONITOR_H__
#include <iostream>

class Monitor
{
private:


public:
    Monitor();
    ~Monitor();
    void print(uint8_t *data, int size);
};
#endif