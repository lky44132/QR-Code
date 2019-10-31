#ifndef INC_3307_FOODFACTORY_H
#define INC_3307_FOODFACTORY_H

#include "Food.h"

class FoodFactory{

private:
    static long foodID;


public:
    FoodFactory();
    Food createFood(char * name);
    Food createDefaultFood();

};



#endif //INC_3307_FOODFACTORY_H
