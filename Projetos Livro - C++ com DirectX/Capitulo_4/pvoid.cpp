#include <iostream>
using namespace std;

void SetInt(int* pInt)
{
    *pInt = 2;
}

void SetFloat(float* pFloat)
{
    *pFloat = 2.1f;
}

int main()
{
    void* p;
    int a;
    float b;
    p = &a;
    SetInt((int*)p);
    p = &b;
    SetFloat((float*)p);
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
    return 0;
}