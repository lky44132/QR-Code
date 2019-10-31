
#ifndef CS3307_GROUP_TABLEFACTORY_H
#define CS3307_GROUP_TABLEFACTORY_H

#include "Table.h"

class TableFactory{

private:
    static long table_ID;
    long resID;

public:
    TableFactory();
    TableFactory(long restaurantID);
    void setResID(long restaurantID);
    Table create_Table();
    Table create_default_table();

};

#endif //CS3307_GROUP_TABLEFACTORY_H