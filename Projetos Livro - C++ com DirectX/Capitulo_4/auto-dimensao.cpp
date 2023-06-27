#include <iostream>
using namespace std;

void print(char *str)
{
    cout << str;
}

int main()
{
    char matriz[] = "Imprime isto\n";
    print(matriz);
    print("imprima isto tambem\n");
    return 0;
}