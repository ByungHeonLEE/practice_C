#include <iostream>
using namespace std;

class Parent
{
public:
    void print() const
    {
        cout << "public" << endl;
    }
    int a;

protected:
    int b;

private:
    int c;
};

class Child1 : protected Parent
{
public:
    void set()
    {
        a = 1;
        b = 2;
        //c = 3; //compile error
        print();
    }
};

class Child2 : private Child1
{
public:
    void set()
    {
        a = 1;
        b = 2;
        //c = 3; //compile error
        print();
    }
};

class Child3 : public Child2
{
public:
    void set()
    {
        //a = 1; //compile error
        //b = 2; //compile error
        //c = 3; //compile error
        //print();
    }
};

int main()
{
    Child1 ch1, ch2, ch3;
    ch1.set();
    ch2.set();
    ch3.set();
    return 0;
}