#include <iostream>
#include <vector>

using namespace std;
int& plusThree(int number);

int main()
{
    cout << plusThree(1);
    return 0;
}

int& plusThree(int number)
{
    int threeMore = number + 3;
    int& rThreeMore = threeMore;
    return rThreeMore;
}