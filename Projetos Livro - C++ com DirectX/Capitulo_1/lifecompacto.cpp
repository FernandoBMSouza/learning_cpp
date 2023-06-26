#include <iostream>
using namespace std;

int main()
{
    int life = 100;
    cout << "Voce tem " << life << " de vida\n";
    cout << "Voce levou um tiro!\n";
    life -= 55;
    cout << "Agora voce tem " << life << " de vida!\n";
    cout << "Voce pegou uma caixa de vida\n";
    life += 20;
    cout << "Agora voce tem " << life << " de vida!\n";
    life /= 3;
    cout << "life = " << life;
    life *= 3;
    cout << "\nlife = " << life << "\n";
    return 0;
}