
#include <iostream>
#include "Customer.h"
using namespace std;

void Customer :: Customer(){

}

void Customer ::scan() {

}

void Customer ::create_table() {
    Table meal_table.table_ID = this -> Code.table_ID;
    meal_table.order_queue = new char* food[255];
}

char* Customer ::get_menu() {
    return Restaurant.menu;
}

void Customer ::order_menu(Food foodID) { // No parameter in Class Diagram
    meal_table.order_queue.add(foodID);
}

char *Customer ::order_status(Food food){
    return food.status; // Something like 50%, 60% ?
}

void Customer ::get_data() {

    cout << "Your table ID is: " << this -> current_Table.table_ID << endl;
    cout << this -> current_Table.restaurant_ID << endl;
    cout << this -> current_Table.status << endl;

}

void Customer ::send_data() {


}

void Customer ::payment() {


}

void Customer ::add_member(long phone_number, Membership memberList) { // memberList not in Class Diagram
    memberList.add_member(phone_number); // add_member doesn't have parameter in Class Diagram
}

char* Customer ::call_assistance() {

    //If signal send and received, then print message, else print error ?
    cout << "One of our staff is coming to assist you, please wait." << endl;
}