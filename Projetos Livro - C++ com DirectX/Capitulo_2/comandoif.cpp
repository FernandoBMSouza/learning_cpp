#include <iostream>
using namespace std;

int main()
{
    cout << "Digite um numero diferente de zero\n";
    int valor;
    cin >> valor;
    if (valor == 0)
        cout << "Valor e igual a 0! Errado!\n";
    if (valor != 0)
        cout << "Valor e diferente de 0! Certo\n";
    return 0;
}