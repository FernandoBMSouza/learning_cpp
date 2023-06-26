#include <iostream>
using namespace std;

void VoidFunc();

int main()
{
    VoidFunc();
    return 0;
}

void VoidFunc()
{
    cout << "Esta funcao nao possui valor de retorno!";
}