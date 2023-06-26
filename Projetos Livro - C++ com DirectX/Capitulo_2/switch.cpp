#include <iostream>
using namespace std;

int main()
{
    int valor;
    cout << "Escolha um e digite o numero correspondente:" << endl;
    cout << "1. frase 1\n";
    cout << "2. frase 2\n";
    cout << "3. frase 3\n";
    cin >> valor;
    switch (valor)
    {
    case 1:
        cout << "Agua mole, pedra dura, tanto bate ate que fura." << endl;
        break;
    case 2:
        cout << "Em terra de cego, quem tem olho e rei.\n";
        break;
    case 3:
        cout << "Quando achei as respostas, mudaram as perguntas.\n";
        break;
    default:
        cout << "Digite apenas 1, 2 ou 3!\n";
        break;
    }
    return 0;
}