#include <iostream>
using namespace std;

void pegaarray(float *);

int main()
{
    float var[3];
    pegaarray(var); // Quando passamos um array sem [] significa &array[0]
    // Exibe os valores do array
    for (int t = 0; t < 3; t++)
        cout << var[t] << endl;
    return 0;
}

void pegaarray(float *p)
{
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
}