#include <iostream>
class Hero
{
private:
    int health;
    char level;

public:
    // compiler provides a default and copy constructor inbuilt
    // user defined default constructor
    Hero()
    {
        std::cout << "Default Constructor" << '\n';
    }
    // parametrized constructor
    Hero(int health, int level)
    {
        this->health = health;
        this->level = level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char l)
    {
        level = l;
    }
    int getHealth()
    {
        return health;
    }
    int getLevel()
    {
        return level;
    }
    void print()
    {
        std::cout << "Health: " << health << '\n';
        std::cout << "Level: " << level << '\n';
    }
};