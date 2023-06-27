#include <iostream>
using namespace std;

void func(int& a)
{
    a = 10;
    cout << "a = " << a << "\n";
}

int main()
{
    int b = 100;
    func(b);
    cout << "b = " << b << "\n";
    return 0;
}