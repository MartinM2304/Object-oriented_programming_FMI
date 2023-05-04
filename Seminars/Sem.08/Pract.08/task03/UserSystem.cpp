#include "UserSystem.h"

UserSystem &UserSystem::addUser(const char * name, const char * family, const char *mail) {
    if(count>=99){
        throw std::logic_error("System is full");
    }
    users[count]=User(name,family,mail);

    count++;
    return *this;
}