#include <iostream>
#include <vector>
#include <ctime>
#include <stdio.h>
#include <cstdlib>

int16_t genRandInRange(int a, int b)
{
    return rand() % (a - b + 1) + a;
}

int main()
{
    int a[50], k, tmp;

    std::srand(1234);
    for (int i = 0; i < 50; ++i)
        a[i] = genRandInRange(0, 100);
    //아 이젠 모르겠다 ㅎ
}