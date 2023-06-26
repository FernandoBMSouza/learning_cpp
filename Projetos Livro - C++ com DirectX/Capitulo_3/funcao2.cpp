#include <iostream>
using namespace std;

int func(); // Prototipo da funcao

int main()
{
    func(); // Chama a funcao
    return 0;
}

int func() // Define a funcao
{
    // Corpo da funcao
    cout << "Digite um numero: ";
    int num;
    cin >> num;
    cout << "Voce digitou " << num << "\n";
    return 0;
}