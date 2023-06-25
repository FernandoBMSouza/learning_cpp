#include <iostream>
using namespace std;

int main ()
{
    int var1 = 30;
    double var2 = 20.34;
    char var3 = 'c';
    int var4 = var1;
    cout << "var1 = " << var1;
    cout << "\nvar2 = " << var2;
    cout << "\nvar3 = " << var3;
    cout << "\nvar4 = " << var4;
    var3 = 'v';
    cout << "\nAgora var3 e igual a: " << var3 << "\n";
    return 0;
}