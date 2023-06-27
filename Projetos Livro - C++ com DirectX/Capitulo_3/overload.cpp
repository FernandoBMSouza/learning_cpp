#include <iostream>
using namespace std;

void MyPrint(int varInt);
void MyPrint(char varChar1, char varChar2);

int main()
{
    int i = 0;
    char ch = 'd', ch2 = 'a';
    MyPrint(i);
    MyPrint(ch, ch2);
    return 0;
}

void MyPrint(int varInt)
{
    cout << varInt;
}

void MyPrint(char varChar1, char varChar2)
{
    cout << varChar1;
    cout << varChar2;
}