#ifndef OBJECT_ORIENTED_PROGRAMMING_FMI_GAMEPLATFORM_H
#define OBJECT_ORIENTED_PROGRAMMING_FMI_GAMEPLATFORM_H
#include "Game.h"
#include <iostream>


class GamePlatform {

    Game* games;
    size_t gamesINStore=0;
    size_t arraySize=0;

    void copyGames(const Game*games);

    void free();
    void copyFrom(const GamePlatform&other);

public:
    GamePlatform(const Game *newGames,size_t n);

    Game *getGames() const;

    void setGames(Game *games);

    size_t getGamesInStore() const;

    void setGamesInStore(size_t gamesInStore);

    GamePlatform()=default;
    GamePlatform(const GamePlatform& other);
    GamePlatform & operator=(const GamePlatform& other);
    ~GamePlatform();

    void addGame();
    void displayGame(size_t n);
    void printAllGames();
};


#endif //OBJECT_ORIENTED_PROGRAMMING_FMI_GAMEPLATFORM_H
