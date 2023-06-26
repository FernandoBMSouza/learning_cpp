#include <iostream>
using namespace std;

int func();

int main()
{
    if(func())
        cout << "Verdadeiro\n";
    else
        cout << "Falso\n";
    return 0;
}

int func()
{
    int a;
    cout << "Digite um numero: ";
    cin >> a;
    return a;
}