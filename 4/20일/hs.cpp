#include <iostream>

#include <stdlib.h>
#include <crtdbg.h>

#define _CRTDBG_MAP_ALLOC

using namespace std;

class A
{
    int *data;

public:
    A()
    {
        data = new int[100];
    }
    ~A()
    {
        delete[] data;
    }
};

void do_something() { A *pa = new A(); }

int main()
{
    do_something();
    _CrtDumpMemoryLeaks();
}