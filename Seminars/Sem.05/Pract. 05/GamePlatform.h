#ifndef OBJECT_ORIENTED_PROGRAMMING_FMI_GAMEPLATFORM_H
#define OBJECT_ORIENTED_PROGRAMMING_FMI_GAMEPLATFORM_H
#include "Game.h"
#include <iostream>


class GamePlatform {

    Game* games;
    size_t gamesINStore=0;

    void free();

public:

    GamePlatform(const Game *games,size_t gamesInStore);

    GamePlatform()=default;
    GamePlatform(const GamePlatform& other);
    GamePlatform & operator=(const GamePlatform& other);
    ~GamePlatform();
};


#endif //OBJECT_ORIENTED_PROGRAMMING_FMI_GAMEPLATFORM_H
