#include <iostream>

int main()
{
    float var;
    float *p;       // declara o ponteiro
    p = &var;       // o ponteiro recebe o endereco de var
    *p = 10.01f;    // move 10.01f ao endereco de var
    std::cout << "var = " << var << std::endl; 
    std::cout << "*p = " << *p << std::endl;
    std::cout << "p = " << p << std::endl;
    std::cout << "&var = " << &var << std::endl;
    return 0;
}