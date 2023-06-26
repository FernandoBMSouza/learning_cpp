// Heap
// Demonstrates dynamically allocating memory

/* Dica: para cada new deve existir um delete, 
 * uma boa prática é ao escrever o new já 
 * acrescente o delete para não se esquecer
 */

#include <iostream>

using namespace std;

int* intOnHeap(); // returns an int on the heap
void leak1(); // creates a memory leak
void leak2(); // creates a another memory leak

int main()
{
    int* pHeap = new int;
    *pHeap = 10;
    cout << "*pHeap: " << *pHeap << "\n\n";

    int* pHeap2 = intOnHeap();
    cout << "pHeap2: " << *pHeap2 << "\n\n";

    cout << "Freeing memory pointed to by pHeap.\n\n";
    delete pHeap;

    cout << "Freeing memory pointed to by pHeap2.\n\n";
    delete pHeap2;

    // get rid of dangling pointers
    pHeap = 0;
    pHeap2 = 0;
    // outra forma seria passar algum local válido
    // da memória para eles apontarem
    

    return 0;
}

int* intOnHeap()
{
    int* pTemp = new int(20);
    return pTemp;
}

void leak1()
{
    int* drip1 = new int(30);
}

void leak2()
{
    int* drip2 = new int(50);
    drip2 = new int(100);
    delete drip2;
}