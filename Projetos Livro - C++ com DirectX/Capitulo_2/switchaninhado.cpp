#include <iostream>
using namespace std;

int main()
{
    int valor;
    cout << "Escolha um:\n";
    cout << "1. Ditados originais\n";
    cout << "2. Ditados em versao humoristica\n";
    cin >> valor;
    switch (valor)
    {
        case 1:
            cout << "Escolha um:\n";
            cout << "1. Frase 1\n";
            cout << "2. Frase 2\n";
            cin >> valor;
            switch (valor)
            {
            case 1:
                cout << "Agua mole, pedra dura, tanto bate ate que fura.\n";
                break;
            case 2:
                cout << "Em terra de cego, que tem um olho e rei.\n";
                break;
            default:
                cout << "Digite apenas 1 ou 2!!\n";
                break;
            }
            break;
        case 2:
            cout << "Escolha um:\n";
            cout << "1. Frase 1\n";
            cout << "2. Frase 2\n";
            cin >> valor;
            switch (valor)
            {
            case 1:
                cout << "Agua mole, pedra dura, tanto bate ate que molha.\n";
                break;
            case 2:
                cout << "Em terra de cego, que tem um olho e caolho.\n";
                break;
            default:
                cout << "Digite apenas 1 ou 2!!\n";
                break;
            }
            break;
        default:
            cout << "Digite apenas 1 ou 2!1\n";
            break;
    }
    return 0;
}