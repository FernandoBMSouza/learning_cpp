#include <iostream>

using namespace std;

class Critter
{
    private:
        int m_Hunger;
        int m_Boredom;

        int GetMood() const;
        void PassTime(int time = 1);
    
    public:
        Critter(int hunger = 0, int boredom = 0);
        void Talk();
        void Eat(int food = 4);
        void Play(int fun = 4);
        int GetHunger();
        int GetBoredom();
};

Critter::Critter(int hunger, int boredom):
    m_Hunger(hunger),
    m_Boredom(boredom)
{

}

int Critter::GetHunger()
{
    return m_Hunger;
}

int Critter::GetBoredom()
{
    return m_Boredom;
}

inline int Critter::GetMood() const
{
    return (m_Hunger + m_Boredom);
}

void Critter::PassTime(int time)
{
    m_Hunger += time;
    m_Boredom += time;
}

void Critter::Talk()
{
    cout << "I'm a critter and I fell ";

    int mood = GetMood();
    if(mood > 15)
    {
        cout << "mad, my boredom is " << 
        m_Boredom << " and my hungry is " <<
        m_Hunger << ".\n";
    }
    else if(mood > 10)
    {
        cout << "frustated, my boredom is " << 
        m_Boredom << " and my hungry is " <<
        m_Hunger << ".\n";
    }
    else if(mood > 5)
    {
        cout << "okay, my boredom is " << 
        m_Boredom << " and my hungry is " <<
        m_Hunger << ".\n";
    }
    else
    {
        cout << "happy, my boredom is " << 
        m_Boredom << " and my hungry is " <<
        m_Hunger << ".\n";
    }
    PassTime();
}

void Critter::Eat(int food)
{
    cout << "Brruppp.\n";

    m_Hunger -= food;
    if(m_Hunger < 0)
    {
        m_Hunger = 0;
    }
    PassTime();
}

void Critter::Play(int fun)
{
    cout << "Wheee!\n";

    m_Boredom -= fun;
    if(m_Boredom < 0)
    {
        m_Boredom = 0;
    }
    PassTime();
}

int main()
{
    Critter crit;
    crit.Talk();

    int choice = 0;
    do
    {
        cout << "\nCritter Caretaker\n\n";
        cout << "0 - Quit\n";
        cout << "1 - Listen to you critter\n";
        cout << "2 - Feed your critter\n";
        cout << "3 - Play with your critter\n";
        cout << "4 - Show Critter status\n\n";

        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Good-bye.\n";
            break;
        case 1:
            crit.Talk();
            break;
        case 2:
            crit.Eat();
            break;
        case 3:
            crit.Play();
            break;
        case 4:
            cout << "Hunger: " << crit.GetHunger() << endl;
            cout << "Boredom: " << crit.GetBoredom() << "\n\n";        
            break;
        default:
            cout << "\nSorry, but " << choice << " isn't a valid choice.\n";
        }
    } while (choice != 0);
    
    return 0;
}