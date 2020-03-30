#include <iostream>
#include <vector>
#include <ctime>

int generateRandomNumberInRange(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

void printVector(const std::vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
    std::cout << std::endl;
}

void dotProductTwovectors()
{
    int size, result = 0;
    std::cout << "Enter the size: ";
    std::cin >> size;

    if (size < 1)
        return;
    std::vector<int> v1(size), v2(size);
    for (int i = 0; i < size; i++)
    {
        v1[i] = generateRandomNumberInRange(0, 1);
        v2[i] = generateRandomNumberInRange(0, 2);
    }

    std::cout << "1st vector" << std::endl;
    printVector(v1);
    std::cout << "2nd vector" << std::endl;
    printVector(v2);

    for (int i = 0; i < size; i++)
        result += v1[i] * v2[i];
    std::cout << "result" << std::endl
              << result << std::endl;
}

int main()
{
    std::srand(time(NULL));
    dotProductTwovectors();
    return 0;
}