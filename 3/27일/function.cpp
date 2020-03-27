#include <iostream>

using namespace std;

void increaseByOne(int value)
{
    value += 1;
}

void increaseByTwo(int &value)
{
    value += 2;
}

//void increaseByThree(const int& value){
//value += 3;
//}

int main()
{
    int number = 0;
    increaseByOne(number);
    cout << number << endl;
    increaseByTwo(number);
    cout << number << endl;
    return 0;
}