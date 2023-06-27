#include <iostream>
using namespace std;

int func()
{
    static int num = 0;
    num++;
    cout << num << "\n";
    return 0;
}

int main()
{
    for (int t = 0; t <= 30; t++)
    {
        func();
    }
    return 0;
}