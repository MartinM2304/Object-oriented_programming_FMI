#include "GamePlatform.h"

GamePlatform::GamePlatform(const Game *newGames, size_t newFilesCount) {

    games = new Game [newFilesCount];

    for(int i=0;i<newFilesCount;i++){
        games[i]=newGames[i];
    }
    setGamesInStore(newFilesCount);
}

Game *GamePlatform::getGames() const {
    return games;
}

void GamePlatform::setGames(Game *games) {
    GamePlatform::games = games;
}

size_t GamePlatform::getGamesInStore() const {
    return gamesINStore;
}

void GamePlatform::setGamesInStore(size_t gamesInStore) {
    gamesINStore = gamesInStore;
}

void GamePlatform::free() {
    delete[] games;
    games= nullptr;
    gamesINStore=0;
}
GamePlatform::~GamePlatform() {
    free();
}
void GamePlatform::addGame() {

}
void GamePlatform::displayGame(size_t n) {
    std::cout<<games[n].getTitle()<<std::endl;
}
void GamePlatform::printAllGames() {
    for(int i=0;i<gamesINStore;i++){
        std::cout<<games[i].getTitle();
    }
}
