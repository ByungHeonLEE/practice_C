#include <iostream>
#include <string>

using namespace std;

int add(int x, int y)
{
    return x + y;
}

int addTest()
{
    return add(10, 20);
}

int main()
{
    int a = 0;
    float b[3];
    int c = 0;
    string d;

    for (int i = 0; i < 5; i++)
    {
        a++;
        b[i] = i;
    }

    c = add(b[1], b[2]);
    d = "Hello world!";

    a = addTest();
    cout << a << endl;
    for (int i = 0; i < 3; i++)
        cout << b[i] << endl;
    cout << d << endl;
}
