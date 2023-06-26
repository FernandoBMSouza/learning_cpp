#include <iostream>
using namespace std;

float add(float var1, float var2);

int main()
{
    float a, b;
    cin >> a;
    cin >> b;
    if (add(a, b) == 10)
        cout << "A soma nao pode retornar dez!\n";
    else
        cout << "Certo!\n";
    return 0;
}

float add(float var1, float var2)
{
    cout << "Somando " << var1 << " com " << var2 << "\n";
    return var1 + var2;
}