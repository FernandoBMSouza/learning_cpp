#include <iostream>

int main()
{
    int x = 10;
    char ch = 'a';

    printf( "Ola mundo" );
    printf( "O numero e: %d, e a letra e: %c\n", x, ch );

    x = 0;

    scanf( "%d", &x );
    printf( "X: %d", x);

    return 0;
}