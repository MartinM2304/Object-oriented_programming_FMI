#include "Order.h"

Order::Order(MyString name, size_t count) {
    this->name=name;
    this->count=count;
    list=new Product[count];
}