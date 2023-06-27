#include <iostream>
using namespace std;

int num = 30;

int func()
{
    cout << num << "\n";
    num = 10;
    cout << num << "\n";
    return 0;
}

int main()
{
    cout << num << "\n";
    func();
    return 0;
}