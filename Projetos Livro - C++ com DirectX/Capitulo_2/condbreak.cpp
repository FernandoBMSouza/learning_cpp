#include <iostream>
using namespace std;

int main()
{
    int timer = 0;
    while (timer++ < 10)
    {
        if (timer == 5)
            continue;
        cout << timer << ". Oi mundo!\n";
    }
    return 0;
}