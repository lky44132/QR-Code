
#include <iostream>
#include "Restaurant.h"

Restaurant::Restaurant() {
    ff = FoodFactory();
    restaurantID = 0;
    tf = TableFactory(0);
    tableList[0] = tf.create_default_table();
    Food defaultFood1 = ff.createDefaultFood();
    defaultFood1.setFoodName("apple");
    defaultFood1.setPrice(1.11);
    defaultFood1.setPopularity(10);
    Food defaultFood2 = ff.createDefaultFood();
    defaultFood2.setFoodName("banana");
    defaultFood2.setPrice(2.22);
    defaultFood2.setPopularity(5);
    Food defaultFood3 = ff.createDefaultFood();
    defaultFood3.setFoodName("orange");
    defaultFood3.setPrice(3.33);
    defaultFood3.setPopularity(1);
    waitingList.push(defaultFood1);
    waitingList.push(defaultFood2);
    waitingList.push(defaultFood3);
    menu[0] = defaultFood1;
    menu[1] = defaultFood2;
    menu[2] = defaultFood3;
    income = 0.00;
    resName = "defaultName";
    tableList[0] = tf.create_default_table();
    tableList[1] = tf.create_default_table();
}


Restaurant ::Restaurant(long resID,char * restaurantName) {

    ff = FoodFactory();
    restaurantID = resID;
    tf = TableFactory(resID);
    waitingList.push(ff.createDefaultFood());
    income = 0.00;
    resName = restaurantName;

}

long Restaurant :: getResID() {
    return restaurantID;
}

char * Restaurant :: getResName() {
    return resName;
}

float Restaurant :: getIncome() {
    return income;
}

Food * Restaurant :: getMenu() {
    return menu;
}

queue <Food> Restaurant :: getWaitingList() {
    return waitingList;
}

Table * Restaurant :: getTableList() {
    return tableList;
}

void Restaurant :: addToMenu() {

    char * name = "";
    cout << "enter the name of food: " << endl;
    cin >> name;
    Food newFood = ff.createFood(name);

    float price = 0.00;
    cout << "\nenter the price of food: " <<endl;
    cin >> price;
    newFood.setPrice(price);

    int preTime = 0;
    cout << "\nenter the preparation time of food: " <<endl;
    cin >> preTime;
    newFood.setPreparationTime(preTime);

    char * type = "";
    cout << "\nenter the type of food: " << endl;
    cin >> type;
    newFood.setType(type);

    cout << "\n" << endl;
    for (int i=0 ; i< 512; i++){
        if (menu[i].getFoodID() == 0){
            menu[i] = newFood;
            break;
        }
    }
}

void Restaurant ::deleteFoodInMenu(long foodID) {
    for (int i = 0; i < 512; i++){
        if (menu[i].getFoodID() == foodID){
            menu[i] = ff.createDefaultFood();
            break;
        }
    }
}

void Restaurant :: foodAdd (Food *orderList,int numOfFood){
    for (int i = 0; i<numOfFood;i++){
        orderList[i].addOnePopularity();
        waitingList.push(orderList[i]);
    }
}

void Restaurant :: foodDone(){
    waitingList.pop();
}

int Restaurant :: calculateWaitingTime(){
    queue <Food> sameList = waitingList;
    int waitingTime = 0;
    while(!sameList.empty()){
        Food food = sameList.front();
        waitingTime = waitingTime + food.getPreparationTime();
        sameList.pop();
    }
}

void Restaurant :: modifyTableStatus(Table table, int status){
    table.set_status(status);
}

void Restaurant :: modifyWaitingList(Food modifiedFood){
    if (modifiedFood.getStatus() <= 1){
        queue <Food> sameList;
        while(!waitingList.empty()){
            Food food = waitingList.front();
            if (modifiedFood.getFoodID() == food.getFoodID() && modifiedFood.getTableID() == food.getTableID()){
                ;
            } else{
                sameList.push(food);
            }
            waitingList.pop();
        }
        waitingList = sameList;
    } else{
        cout << "The food is already being prepared." << endl;
    }

}