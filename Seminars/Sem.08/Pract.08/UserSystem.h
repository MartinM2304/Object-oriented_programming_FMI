#ifndef SEM_08_USERSYSTEM_H
#define SEM_08_USERSYSTEM_H
#include "User.h"

class UserSystem {
    User users[100];

public:
    UserSystem();

    UserSystem& addUser(const User&);
    UserSystem& addUser(const char*, const char*,const char*);
    UserSystem& sendMessage(const char*, const char*,const char*);

};


#endif //SEM_08_USERSYSTEM_H
