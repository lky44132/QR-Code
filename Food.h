

#ifndef INC_3307_FOOD_H
#define INC_3307_FOOD_H
class Food{

private:
    long foodID;
    char *foodName;
    float price;
    int status;
    int preparationTime;
    int popularity;
    long tableID;
    char *type;

public:

    Food();
    Food(long foodID,char*name);

    long getFoodID();

    char *getFoodName();
    void setFoodName(char* name);

    float getPrice();
    void setPrice(float price);

    int getStatus();
    void setStatus(int status);

    int getPreparationTime();
    void setPreparationTime(int time);

    int getPopularity();
    void setPopularity(int popularity);
    void addOnePopularity();

    long getTableID();

    char *getType();
    void setType(char* type);

};
#endif //INC_3307_FOOD_H
