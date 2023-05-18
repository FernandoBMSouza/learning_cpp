#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Prototypes
string* ptrToElement(vector<string>* const pVec, int i);

int main()
{
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");

    cout << "Sending the object pointed to by returned pointer to cout:\n";
    cout << *(ptrToElement(&inventory, 0)) << "\n\n";
    
    cout << "Assigning the returned pointer to another pointer. (Inexpensive Assignment)\n";
    string* pStr = ptrToElement(&inventory, 1);
    cout << *pStr << "\n\n";

    cout << "Assigning object pointed to by pointer to a string object. (Expensive Assignment)\n";
    string str = *(ptrToElement(&inventory, 2));
    cout << "Sending the new string object to cout:\n";
    cout << str << "\n\n";

    cout << "Altering an object through a returned pointer.\n";
    *pStr = "Healing Potion";
    cout << "Sending the altered object to cout:\n";
    cout << inventory[1] << "\n\n";

    cout << "Displaying Inventory:\n";
    vector<string>::const_iterator iter;
    for (iter = inventory.begin(); iter != inventory.end(); iter++)
    {
        cout << *iter << endl;
    }
    
    return 0;
}

string* ptrToElement(vector<string>* const pVec, int i)
{
    return &((*pVec)[i]);
}
