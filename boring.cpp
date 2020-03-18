#include <iostream>

int main() {
    int sum = 0;
    for(int i=1; i<=10; ++i) {
        if(i==5) continue;
        if(i==7) break;
        sum += i;
    }
    std::cout << sum;
}