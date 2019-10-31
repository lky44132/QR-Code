#include "TableFactory.h"


TableFactory::TableFactory() {
    static long table_ID = 0;
    resID = 0;
}

TableFactory :: TableFactory(long restaurantID){
    static long table_ID = 0;
    resID = restaurantID;
}


void TableFactory::setResID(long ID){
    resID = ID;
}


Table TableFactory::create_Table() {
    table_ID ++;
    return Table(table_ID,resID);
}

Table TableFactory::create_default_table() {
    return Table(resID);
}

