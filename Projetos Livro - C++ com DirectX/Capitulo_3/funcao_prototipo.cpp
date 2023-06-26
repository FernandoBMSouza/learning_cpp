#include <iostream>
using namespace std;

int Show(int Inic, int Fim); // Prototipo da funcao

int main()
{
    Show(10, 40);
    return 0;
}

int Show(int Inic, int Fim)
{
    for (int t = Inic; t <= Fim; t++)
        cout << t << " ";

    return 0;
}