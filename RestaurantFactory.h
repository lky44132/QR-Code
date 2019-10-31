#include "Food.h"
#include "Restaurant.h"
#ifndef INC_3307_RESTAURANTFACTORY_H
#define INC_3307_RESTAURANTFACTORY_H
class RestaurantFactory{
private:
    static long resID;

public:
    RestaurantFactory();
    Restaurant createRestaurant(long resID,char* resName);
    Restaurant createDefaultRestaurant();


};
#endif //INC_3307_RESTAURANTFACTORY_H
