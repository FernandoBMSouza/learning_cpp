#include <iostream>
using namespace std;

int main()
{
    int var;
    int *p;
    p = &var;
    *p = 10;
    cout << "*p = " << *p << " e o mesmo que var = " << var;
    return 0;
}