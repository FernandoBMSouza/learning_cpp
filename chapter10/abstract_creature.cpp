//Abstract Creature
//Demonstrates abstract classes

#include <iostream>
using namespace std;

//When a class constains at least one pure virtual function, it's an abstract class
class Creature  //abstract class
{
    public:
        Creature(int health = 100);
        virtual void Greet() const = 0; //pure virtual member function
        virtual void DisplayHealth() const;

    protected:
        int m_Health;
};

Creature::Creature(int health):
    m_Health(health)
{}

void Creature::DisplayHealth() const
{
    cout << "Health: " << m_Health << endl;
}

//If you override all of its pure virtual functions, then the new
//class is not abstract and you can instantiate objects from it
class Orc : public Creature
{
    public:
        Orc(int health = 120);
        virtual void Greet() const;
};

Orc::Orc(int health):
    Creature(health)
{}

void Orc::Greet() const
{
    cout << "The orc grunts hello.\n";
}

class Pixie : public Creature
{
    public:
        Pixie(int health = 60);
        virtual void Greet() const;
};

Pixie::Pixie(int health):
    Creature(health)
{}

void Pixie::Greet() const
{
    cout << "Tem um gosto meio roxo" << endl;
}


int main()
{
    Creature* pCreature = new Orc();
    pCreature->Greet();
    pCreature->DisplayHealth();

    return 0;
}