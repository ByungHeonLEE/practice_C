#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
    vector<int> vec;
    vector<int> vec1;
    vec1.reserve(100);

    auto startTime = system_clock::now();
    for (int i = 0; i < 100; ++i)
        vec.push_back(i);

    auto endTime = system_clock::now();
    microseconds sec = duration_cast<microseconds>(endTime - startTime);
    cout << "push 100 elements with capacity changed: " << sec.count() << endl;

    startTime = system_clock::now();
    for (int i = 0; i < 100; ++i)
        vec1.push_back(i);

    endTime = system_clock::now();
    sec = duration_cast<microseconds>(endTime - startTime);
    cout << "push 100 elements w/o capacity changed: " << sec.count() << endl;

    vec.clear();
    return 0;
}