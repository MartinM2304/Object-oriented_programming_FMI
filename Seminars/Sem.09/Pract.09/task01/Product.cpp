#include "Product.h"

Product::Product(const MyString & name, double price) {
    Product::name=name;
    if(price<0){
        price=-price;
    }
    Product::price=price;
}
Product::Product() {
    name="";
    price=0;
}