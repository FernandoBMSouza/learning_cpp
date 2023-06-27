#include <iostream>
using namespace std;

void Count(int num, int current = 1);

int main()
{
    Count(10);
    return 0;
}

void Count(int num, int current)
{
    cout << current << " ";
    if (current < num)
        Count(num, ++current);
}