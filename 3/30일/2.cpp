#include <iostream>
#define num 10

using namespace std;
int main()
{
    int *a, b[num];

    cout << "1~10"
         << " in ascending order" << endl;
    for (int i = 0; i < num; i++)
    {
        b[i] = i + 1;
        cout << b[i] << " ";
    }

    cout << endl
         << endl;
    a = b;
    cout << "1~10"
         << " in descedning order" << endl;
    for (int i = 0; i < num; i++)
    {
        a[i] = b[num - i];
        cout << a[i] << " ";
    }
    cout << endl
         << endl;
}