#include <iostream>
using namespace std;

int main()
{
    cout << "Digite um numero nao negativo, par e menor que 5:\n";
    int valor;
    cin >> valor;
    if(valor < 0 || valor > 5)
        cout << "Errado!\n";
    if(valor < 5 && valor >= 0)
    {
        if(valor % 2 == 0)
            cout << "Certo!\n";
        else
            cout << "Errado!\n";
    }
    return 0;
}