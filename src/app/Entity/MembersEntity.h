#ifndef __MEMBERSENTITY_H__
#define __MEMBERSENTITY_H__

#include <vector>
#include <iostream>
#include "MemberInfo.h"

class MembersEntity
{
private:
    std::vector <MemberInfo> vecMembersList;  // 정보를 다 가지고있음
    MemberInfo memberInfo;
    FILE *fpDBData;

public:
    MembersEntity();
    ~MembersEntity();
    void loadMembersInfo();
    // void addMemberInfo(MemberInfo member);
    // void delMemberInfo(MemberInfo member);
    // void makeDBMembersInfo();
    void printMemberInfo();
};

#endif