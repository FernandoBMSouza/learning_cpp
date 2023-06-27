#include <iostream>

int main()
{
    float var = 2.5f;
    float *p;
    p = &var;
    std::cout << "var = " << var << std::endl;
    std::cout << "*p = " << *p << std::endl;
    std::cout << "p = " << p << std::endl;
    std::cout << "&var = " << &var << std::endl;
    return 0;
}