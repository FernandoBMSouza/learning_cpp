#include <iostream>
using namespace std;

typedef int INTEIRO;
typedef int* P_INTEIRO;
typedef int** PP_INTEIRO;

int main()
{
    INTEIRO var = 1;
    P_INTEIRO p;
    PP_INTEIRO pp;
    p = &var;
    pp = &p;
    cout << p << "\neh o mesmo que:\n";
    cout << *pp << "\n"; //Endereco de var
    // cout << pp << "\n"; //Endereco de p
    // cout << **pp << "\n"; //Valor de var
    return 0;
}