#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str1[] = "string velha\n", str[100];
    strcpy(str, str1);
    cout << str;
    strcpy(str, "string nova\n");
    cout << str;
    return 0;
}