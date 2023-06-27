#include <iostream>
using namespace std;

// Macros (funciona como uma funcao inline, otimiza o codigo)
// diferente de funcoes inline, macros nao possuem verificacao de tipo, podendo causar erros
#define mult(a, b) (a) * (b)
#define sq_root(a) (a) * (a)
#define add(c, d) (c) + (d)

int main()
{
    int var1 = 5, var2 = 0;
    cout << "var1 * var2 = " << mult(var1, var2) << "\n";
    cout << "var1^2 = " << sq_root(var1) << "\n";
    cout << "var1 + var2 = " << add(var1, var2) << "\n";
    return 0;
}