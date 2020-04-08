#include <iostream>
#include "StaticSample.h"

using namespace std;

int main()
{
    double Numbers[] = {12.55, 94.68, 8.18, 60.37, 104.502, 75.05};
    int Count = sizeof(Numbers) / sizeof(double);

    double Total = Sum(Numbers, Count);
    double Avg = Average(Numbers, Count);
    double Low = Min(Numbers, Count);
    double High = Max(Numbers, Count);

    cout << "Characteristics of the list";
    cout << "\nMinimum" << Low;
    cout << "\nMaximum" << High;
    cout << "\nTotal: " << Total;
    cout << "\nAverage: " << Avg << endl;
    return 0;
};
