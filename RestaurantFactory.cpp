#include "RestaurantFactory.h"


RestaurantFactory::RestaurantFactory() {
    resID = 0;
}

Restaurant RestaurantFactory:: createRestaurant(long resID,char* resName){
    resID++;
    return Restaurant(resID,resName);
}

Restaurant RestaurantFactory::createDefaultRestaurant() {
    return Restaurant();
}