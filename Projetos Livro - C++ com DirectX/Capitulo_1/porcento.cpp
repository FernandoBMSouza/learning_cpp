#include <iostream>
using namespace std;

int main()
{
    double val1;
    double val2;
    cout << "Digite quanto % voce deseja: ";
    cin >> val1;
    cout << "\nDigite o valor: ";
    cin >> val2;
    cout << val1 << "% de " << val2 << " e " << (val2 / 100) * val1 << "!\n\n";
    return 0;
}