#include <iostream>
using namespace std;

void MyPrint(char varChar = 'a');

int main()
{
    MyPrint();
    return 0;
}

void MyPrint(char varChar)
{
    cout << varChar;
}