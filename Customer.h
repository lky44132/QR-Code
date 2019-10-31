
#ifndef INC_3307_CUSTOMER_H
#define INC_3307_CUSTOMER_H

#include "CustomerFactory.h"
#include "FoodFactory(2).h"

class Customer{

private:
    QRCode Code;
    long customer_ID
    Table current_Table;

public:
    Customer();
    void scan();
    void create_table();
    char *get_menu();
    void order_menu(Food foodID);
    char *order_status(Food food);
    void get_data();// Prints out information instead of return something
    void send_data();
    void payment();
    void add_member(long phone_number, MemberShip memberList);
    char* call_assistance();// Prints out string..Something like "help is on the way"
};

#endif //INC_3307_CUSTOMER_H
