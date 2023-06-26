#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int& rA = a;
    int b = 20;
    rA = b;
    cout << a;
    return 0;
}
