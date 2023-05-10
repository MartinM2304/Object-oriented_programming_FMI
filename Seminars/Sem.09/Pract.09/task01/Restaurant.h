#ifndef TASK01_RESTAURANT_H
#define TASK01_RESTAURANT_H
#include "MyString.h"
#include "Product.h"
class Restaurant {
    MyString name;
    size_t countOfProducts;
    size_t capacity;
    Product* list;

    void free();
    void copyFrom(const Restaurant&other);
    void moveFrom(Restaurant&&other);

private:
    Restaurant(MyString& ,size_t);
    Restaurant(const Restaurant&other);
    Restaurant& operator=(const Restaurant&other);
    ~Restaurant();

    Restaurant(Restaurant&&other);
    Restaurant& operator=(Restaurant&& other);
};


#endif //TASK01_RESTAURANT_H
