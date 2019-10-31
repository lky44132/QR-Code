//
// Created by Wenhan Liu on 10/30/2019.
//

#ifndef INC_3307_GROUP_MEMBERSHIP_H
#define INC_3307_GROUP_MEMBERSHIP_H

//#define MAX_LENGTH 1000
#include <vector>
#include <iostream>
using namespace std;

class Membership{

private:
    //long member_List[MAX_LENGTH];
    vector<long> member_List;

public:
    void add_member(long phone_num);
    bool find_Member(long phone_num);
};

#endif //INC_3307_GROUP_MEMBERSHIP_H
