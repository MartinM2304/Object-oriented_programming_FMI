#ifndef TASK01_ORDER_H
#define TASK01_ORDER_H
#include "MyString.h"
#include "Product.h"
class Order {
    MyString name;
    size_t count;
    Product* list;
public:
    Order(MyString name,size_t count);
};


#endif //TASK01_ORDER_H
