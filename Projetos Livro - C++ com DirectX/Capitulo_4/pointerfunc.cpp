#include <iostream>
using namespace std;

void soma(float *p, float valor);

int main()
{
    float var = 0;
    soma(&var, 20);
    cout << var << "\n";
    return 0;
}

void soma(float *p, float valor)
{
    *p += valor;
}