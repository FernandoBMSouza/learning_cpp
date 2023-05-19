#include <iostream>
using namespace std;

int main()
{
    string text = "hello world";
    string* pText = &text;
    string* ppText = pText;

    cout << (*ppText).size() << endl;
    return 0;
}