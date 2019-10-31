#ifndef INC_3307_TABLE_H
#define INC_3307_TABLE_H

#include "TableFactory.h"
#include <iostream>
#include "Food.h"


class Table{

private:

    long table_ID;
    long restaurant_ID;
    static Food list[512];
    int status;
    int numOfFood;

public:
    Table(long resID);
    Table(long tableID,long resID);

    long get_table_ID();

    long get_restaurant_ID();
    void set_restaurant_ID(long ID);

    Food get_list();
    void add_food(Food food);

    int get_status();
    void set_status(int stat);

    void upload_order();
    void change_table_status(int stat);

    float calculator_bill();
    void assistant();

};

#endif //INC_3307_TABLE_H
