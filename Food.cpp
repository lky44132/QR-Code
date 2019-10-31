
#include "Food.h"

Food ::Food() {
    foodID = 0;
    foodName = "defaultFood";
    price = 5.00;
    status = 0;
    preparationTime = 0;
    popularity = 0;
    tableID = 0;
    type = "defaultType";
}
Food ::Food(long ID, char *name) {
    foodID = ID;
    foodName = name;
    price = 0.00;
    status = 0;//0 for default, 1 for ordered, 2 for cooking, 3 for finished
    preparationTime = 0;
    popularity = 0;
    tableID = 0;
    type = "";
}

long Food :: getFoodID(){
    return foodID;
}

char * Food :: getFoodName(){
    return foodName;
}

void Food :: setFoodName(char* name){
    foodName = name;
}

float Food :: getPrice(){
    return price;
}
void Food ::setPrice(float foodPrice){
    price = foodPrice;
}

int Food ::getStatus(){
    return status;
}

void Food ::setStatus(int foodStatus){
    status = foodStatus;
}

int Food ::getPreparationTime(){
    return preparationTime;
}

void Food ::setPreparationTime(int time){
    preparationTime = time;
}

int Food ::getPopularity(){
    return popularity;
}

void Food ::setPopularity(int foodPopularity){
    popularity = foodPopularity;
}

void Food ::addOnePopularity(){
    popularity = popularity + 1;
}

long Food ::getTableID(){
    return tableID;
}

char *Food ::getType(){
    return type;
}

void Food ::setType(char* foodType){
    type = foodType;
}