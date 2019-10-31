

#ifndef INC_3307_RESTAURANT_H
#define INC_3307_RESTAURANT_H

#include "queue"
#include "Food.h"
#include "FoodFactory.h"
#include "Table.h"
#include "TableFactory.h"


using namespace std;
class Restaurant{

private:
    FoodFactory ff;
    TableFactory tf;
    long restaurantID;
    Food *menu;
    queue <Food> waitingList;
    float income;
    char *resName;
    Table *tableList;

public:
    Restaurant();
    Restaurant(long resID,char* resName);

    long getResID();
    char * getResName();
    float getIncome();
    Food * getMenu();
    queue <Food> getWaitingList();
    Table * getTableList();

    void addToMenu();
    void deleteFoodInMenu(long foodID);

    void foodAdd(Food *orderList,int numOfFood);
    void foodDone();

    int calculateWaitingTime();

    void modifyTableStatus(Table table,int status);

    void modifyWaitingList(Food food);


};

#endif //INC_3307_RESTAURANT_H
