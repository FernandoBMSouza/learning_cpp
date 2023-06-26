#include <iostream>
using namespace std;

float add(float var1, float var2);

int main()
{
    float Soma = add(2.5f, 1.5f);
    cout << Soma;
    return 0;
}

float add(float var1, float var2)
{
    return var1 + var2;
}