#include <iostream>
using namespace std;

int MyCin();
void MyPrint(int a, int b, int c);

int main()
{
    cout << "Digite tres numeros\n";
    // Na linguagem C/C++ os argumentos de uma funcao sao lidos de tras pra frente, 
    // por isso a ordem fica invertida ao executar
    MyPrint(MyCin(), MyCin(), MyCin()); 
    return 0;
}

int MyCin()
{
    int a;
    cin >> a;
    return a;
}

void MyPrint(int a, int b, int c)
{
    cout << a << " ";
    cout << b << " ";
    cout << c << "\n";
}