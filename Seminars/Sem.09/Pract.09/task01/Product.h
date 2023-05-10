#ifndef TASK01_PRODUCT_H
#define TASK01_PRODUCT_H
#include "MyString.h"
#include "Restaurant.h"
class Product {
private:
    MyString name;
    double price;

public:
    Product(const MyString&,double );
    Product();

    friend Restaurant;
};


#endif //TASK01_PRODUCT_H
