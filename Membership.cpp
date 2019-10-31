//
// Created by Wenhan Liu on 10/30/2019.
//

#include "Membership.h"
#include <algorithm>


void Membership ::add_member(long phone_num) {
    this->member_List.push_back(phone_num);
}

bool Membership ::find_Member(long phone_num) {
    long checkPhone = phone_num;
    if (find(member_List.begin(), member_List.end(), checkPhone) != member_List.end()){
        cout << "Member found." << endl;
        return true;
    }else{
        cout << "Member not found." << endl;
        return false;
    }
}