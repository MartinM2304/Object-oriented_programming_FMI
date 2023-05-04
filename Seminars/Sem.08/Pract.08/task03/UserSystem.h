#ifndef TASK03_USERSYSTEM_H
#define TASK03_USERSYSTEM_H
#include "User.h"
#include <iostream>

class UserSystem {

    User users[100];
    size_t count;
public:

    UserSystem& addUser(const char*,const char*,const char*);
    UserSystem& sendMessage(const char*, const char *,const char*);
    void checkMessages(const char*,const char*)const;

};


#endif //TASK03_USERSYSTEM_H
