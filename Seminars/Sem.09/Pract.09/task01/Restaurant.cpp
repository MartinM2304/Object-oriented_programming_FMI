#include "Restaurant.h"

Restaurant::Restaurant(MyString & name, size_t n) {
    this->name=name;
    countOfProducts=n;
    list =new Product[countOfProducts];
}

Restaurant::Restaurant(const Restaurant &other) {
    copyFrom(other);
}

Restaurant &Restaurant::operator=(const Restaurant &other) {
    if(this!=&other){
        free();
        copyFrom(other);
    }
    return *this;
}

Restaurant::~Restaurant() {
    free();
}

Restaurant::Restaurant(Restaurant &&other) {

    moveFrom(std::move(other));
}

void Restaurant::moveFrom(Restaurant &&other) {
    list=other.list;
    other.list= nullptr;
    countOfProducts=other.countOfProducts;
}

Restaurant &Restaurant::operator=(Restaurant &&other) {
    if(this!=&other){
        name=(std::move(other.name));
        free();
        moveFrom(std::move(other));
    }
    return *this;
}

void Restaurant::copyFrom(const Restaurant &other) {
    name=other.name;
    countOfProducts=other.countOfProducts;
    list=new Product[countOfProducts];
    for(int i=0;i<countOfProducts;i++){
        list[i]=other.list[i];
    }
}

void Restaurant::free() {
    name="";
    countOfProducts=0;
    delete[]list;
    list= nullptr;
}

