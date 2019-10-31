

#include "FoodFactory.h"


FoodFactory ::FoodFactory(){
    static long foodID = 0;
}

Food FoodFactory::createFood(char * name) {
    foodID++;
    return Food(foodID,name);
}

Food FoodFactory::createDefaultFood() {
    return Food();
}
