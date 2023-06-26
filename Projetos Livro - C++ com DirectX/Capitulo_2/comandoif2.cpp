#include <iostream>
using namespace std;

int main ()
{
    cout << "Digite um numero positivo:\n";
    int valor;
    cin >> valor;
    if (valor >= 0)
    {
        cout << "Certo!\n";
        cout << "Esta e a segunda chamada da funcao!\n";
        cout << "Voce pode dar qualquer comando aqui!\n";
    }
    if (valor < 0)
        cout << "Errado!\n";
    return 0;
}