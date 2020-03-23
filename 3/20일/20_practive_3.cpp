#include <iostream>
int main() {
    int num;
    std::cout << "enter a number: ";
    std::cin >> num;
    switch (num % 2){
        case 1:
        std::cout << "odd" << std::endl;
        break;
        default:
        std::cout << "even" << std::endl;
        break;
    }

    int sum = 0;
    for (int i = 0; i < 10; i++)
    sum += num;
    std::cout << "sum: " << sum << std::endl;
}