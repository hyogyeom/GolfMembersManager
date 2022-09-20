#include "GolfMembershipManager.h"

GolfMembershipManager::GolfMembershipManager()  // 얘가 app,hw관리, main.cpp가 얘 관리 
{
    listener = new Listener();
}

GolfMembershipManager::~GolfMembershipManager()
{

}

void GolfMembershipManager::run()
{
    while(1)
    {
        listener -> checkEvent();
        //delay(10);
    }
}