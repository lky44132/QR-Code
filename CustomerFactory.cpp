
#include "CustomerFactory.h"

CustomerFactory ::CustomerFactory() {
    static long CustomerID = 0;
}

Customer CustomerFactory :: createCustomer(){
    CustomerID += 1;
    return Customer(CustomerID);
}


