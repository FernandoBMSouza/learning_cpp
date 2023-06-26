#include <iostream>
using namespace std;

int main()
{
    int life = 100;
    cout << "Voce tem " << life << " de vida\n";
    cout << "Voce levou um tiro!\n";
    life = life - 55;
    cout << "Agora voce tem " << life << " de vida!\n";
    cout << "Voce pegou uma caixa de vida\n";
    life = life + 20;
    cout << "Agora voe tem " << life << " de vida!\n";
    return 0;
}