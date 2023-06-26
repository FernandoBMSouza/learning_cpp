#include <iostream>
using namespace std;

int main()
{
    int timer = 0;
    while (timer++ < 100)
    {
        break;
        cout << "Esta mensagem nao aparecera!";
    }
    cout << "Esta mensagem sim!";
    return 0;
}