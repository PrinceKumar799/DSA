#include <iostream>
class Hero
{
private:
    const int id;
    char level;
    int health;
    static int timeToComplete;

public:
    // compiler provides a default and copy constructor inbuilt
    // user defined default constructor
    Hero(int id) : id(id)
    {
        std::cout << "Default Constructor" << '\n';
    }
    // parametrized constructor
    Hero(int health, int level, int id) : id(id)
    {
        this->health = health;
        this->level = level;
    }
    // user defined copy constructor
    Hero(Hero &temp) : id(temp.id)
    {
        this->health = temp.health;
        this->level = temp.level;
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
        std::cout << "Id: " << id << '\n';
    }
    static int getTimeToComplete()
    {
        return timeToComplete;
    }
};
int Hero::timeToComplete = 5;