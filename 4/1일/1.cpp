#include <iostream>

int main()
{
    int ival, sum = 0;

    while (std::cin >> ival, !std::cin.eof())
    {
        sum += ival;
    }
    std::cout << "sum: " << sum << std::endl;
}
