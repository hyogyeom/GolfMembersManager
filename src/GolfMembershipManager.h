#ifndef __GOLFMEMBERSHIPMANAGER_H__
#define __GOLFMEMBERSHIPMANAGER_H__
#include "Listener.h"

class GolfMembershipManager
{
private:
    Listener *listener;



public:
    GolfMembershipManager();
    ~GolfMembershipManager();
    void run();



};

#endif