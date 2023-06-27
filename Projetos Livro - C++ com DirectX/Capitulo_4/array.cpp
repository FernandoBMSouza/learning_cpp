#include <iostream>
using namespace std;

int main()
{
    int matriz[5];
    matriz[0] = 10;
    matriz[1] = 20;
    matriz[2] = 30;
    matriz[3] = 40;
    matriz[4] = 50;

    for (int t = 0; t < 5; t++)
    {
        cout << matriz[t] << "\n";
    }
    return 0;
}