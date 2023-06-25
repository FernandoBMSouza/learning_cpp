#include <iostream>
using namespace std;

int main()
{
    int x = 123;
    int y = 321;
    y = x - (-y);
    x = y + (-x);
    cout << "X = " << x << "\n";
    cout << "Y = " << y << "\n";
    return 0;
}