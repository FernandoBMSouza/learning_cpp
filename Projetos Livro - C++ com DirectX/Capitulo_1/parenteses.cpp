#include <iostream>
using namespace std;

int main()
{
    int bonus = 10;
    int EXP = 5;
    int HP = ((EXP * 2) - 1) + bonus;
    int MP = ((EXP * 3) + bonus) / 2;
    return 0;
}