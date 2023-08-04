class Hero
{
private:
    int health;
    char level;

public:
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
        cout << "Health: " << health << endl;
        cout << "Level: " << level << endl;
    }
};