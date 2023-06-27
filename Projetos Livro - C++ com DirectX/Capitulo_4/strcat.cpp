#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str1[100], str2[100];
    strcpy(str1, "Eh assim que o ");

    // strcpy(str2, "strcat trabalha!\n");
    // strcat(str1, str2);
    // OU
    strcat(str1, "strcat trabalha!\n");
    
    cout << str1;
    return 0;
}