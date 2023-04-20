#include "Game.h"
#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)

Game::Game(const char* argtitle, float argprice, bool argisAvailable) {
    setTitle(argtitle);
    setPrice(argprice);
    setIsAvailable(argisAvailable);
}

void Game::copyTitle(const char* newTitle){
    title = new char[strlen(title) + 1];
    strcpy(title, newTitle);
}

void Game::copyFrom(const Game& other) {
    copyTitle(other.title);
    this->price = other.price;
    this->isAvailable = other.isAvailable;
}

void Game::free() {
    delete[] title;
    title = nullptr;
    price = 0;
    isAvailable = 0;
}

Game::Game(const Game& other) {
    copyFrom(other);
}

Game& Game::operator=(const Game& other) {
    if (this != &other)	{
        free();
        copyFrom(other);
    }
    return *this;
}
Game::~Game() {
    free();
}

void Game::setTitle(const char* title) {
    delete[] this->title;
    copyTitle(title);
}

void Game::setPrice(float price) {
    this->price = price;
}

void Game::setIsAvailable(bool isAvailable) {
    this->isAvailable = isAvailable;
}

const char* Game::getTitle() const {
    return title;
}

float Game::getPrice() const {
    return price;
}

bool Game::getIsAvailable() const {
    return isAvailable;
}

bool Game::isFree() const{
    if ((this->price - 0) != 0) {
        return false;
    }
    return true;
}

void Game::print() const {
    std::cout << "Title:" << Game::getTitle() << " Price:" << Game::getPrice() << " Available:";
    if (this->isAvailable == true) {
        std::cout << "Yes";
    }
    else {
        std::cout << "No";
    }
    std::cout << std::endl;
}
