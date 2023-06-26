#include <iostream>
using namespace std;

int main()
{
    int counter = 0;
    cout << "PARES: " << endl;
    for (; counter <= 200; counter += 2)
    {
        cout << counter << " ";
    }
    counter = 1;
    cout << "\n\nIMPARES: " << endl;
    for (; counter <= 200; counter += 2)
    {
        cout << counter << " ";
    }
    return 0;
}