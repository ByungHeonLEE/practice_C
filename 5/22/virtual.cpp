#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void print1() const
    {
        cout << "parent_print1" << endl;
    }
    void print2() const
    {
        cout << "parent_print2" << endl;
    }
};

class Child1 : public Parent
{
public:
    void print1() const
    {
        cout << "child1_print1" << endl;
    }
    void print2() const
    {
        cout << "child1_print2" << endl;
    }
};

class Child2 : public Child1
{
public:
    void print1() const
    {
        cout << "child2_print1" << endl;
    }
    void print2() const
    {
        cout << "child2_print2" << endl;
    }
};

int main()
{
    Parent *p_p = new Parent();
    Parent *p_ch1 = new Child1();
    Parent *p_ch2 = new Child2();
    Child1 *ch1_ch2 = new Child2();

    p_p->print1();
    p_p->print2();
    p_ch1->print1();
    p_ch1->print2();
    p_ch2->print1();
    p_ch2->print2();
    ch1_ch2->print1();
    ch1_ch2->print2();
}