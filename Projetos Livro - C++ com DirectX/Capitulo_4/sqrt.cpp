#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float f = 64;
    f = (float)sqrt((double)f);
    cout << "A raiz quadrada de "
         << f*f
         << " e " << f << "\n";
    return 0;
}