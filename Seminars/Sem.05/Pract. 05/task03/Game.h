#ifndef OBJECT_ORIENTED_PROGRAMMING_FMI_GAME_H
#define OBJECT_ORIENTED_PROGRAMMING_FMI_GAME_H

class Game {
private:
    char* title = nullptr;
    float price;
    bool isAvailable;

    void copyTitle(const char* newTitle);
    void copyFrom(const Game& other);
    void free();

public:
    Game(const char* title, float price, bool isAvailable);

    Game() = default;
    Game(const Game& other);
    Game& operator=(const Game& other);
    ~Game();

    const char* getTitle() const;
    void setTitle(const char* title);
    float getPrice() const;
    void setPrice(float price);
    bool getIsAvailable() const;
    void setIsAvailable(bool isAvailable);
    bool isFree() const;
    void print() const;
};
#endif //OBJECT_ORIENTED_PROGRAMMING_FMI_GAME_H
