#include <iostream>
using namespace std;

int main()
{
    cout << "Digite um numero diferente de 0 para\n";
    cout << "verdadeiro ou 0 para falso:\n";
    int valor;
    cin >> valor;
    if(!valor)
        cout << "Falso\n";
    else
        cout << "Verdadeiro\n";
    return 0;
}