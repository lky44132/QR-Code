
#include "Table.h"
using namespace std;


Table :: Table(long resID) {
    table_ID = 0;
    restaurant_ID = resID;
    status = 0;
    numOfFood = 0;
}

Table :: Table(long id,long resID){
    table_ID = id;
    restaurant_ID = resID;
    status = 0;
    numOfFood = 0;
}

long Table :: get_table_ID() {
    return table_ID;
}

long Table :: get_restaurant_ID() {
    return restaurant_ID;
}

void Table ::set_restaurant_ID(long ID) {
    restaurant_ID = ID;
}

Food Table::get_list() {
    return *list;
}

void Table ::add_food(Food food) {
    for (int i = 0; i < 512; i++){
        if (list[i].getFoodID() == 0){
            list[i] = food;
            numOfFood ++;
            break;
        }
    }
}

int Table::get_status() {
    return status;
}

void Table::set_status(int stat) {
    status = stat;
}

void Table::upload_order() {
    set_status(1);
}

float Table::calculator_bill() {
    float sum;
    sum = 0;
    for (int i = 0; i < 256; i++) {
        if (list[i].getFoodID() != 0){
            sum = sum + list[i].getPrice();
        }
    }
    return sum;
}

void Table::assistant() {
    cout << "Table " << get_table_ID() << " is calling assistant" << endl;
}