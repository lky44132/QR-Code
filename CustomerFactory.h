
#ifndef INC_3307_CUSTOMERFACTORY_H
#define INC_3307_CUSTOMERFACTORY_H

#include "Customer.h"

class CustomerFactory{

private:
    static long CustomerID;

public:
    CustomerFactory();
    Customer createCustomer();

}

#endif //INC_3307_CUSTOMERFACTORY_H