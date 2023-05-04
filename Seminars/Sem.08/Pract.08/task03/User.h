#ifndef TASK03_USER_H
#define TASK03_USER_H
#include "MyString.h"

class User {
    MyString name;
    MyString family;
    MyString mail;

public:
    User(const char*,const char*,const char*);
};


#endif //TASK03_USER_H
