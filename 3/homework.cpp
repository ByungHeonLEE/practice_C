#include <iostream>

int main() {
    std::cout << "enter the number of layer: " << std::endl;
    int n;
    std::cin >> n;
    for(int i=0; i<n; ++i) {
        for (int j = n; j>= i; j--){
            std::cout << " ";
        }
        for (int j =0; j <= i; j++) {
            std::cout << "*";
        }
        for (int j = 0; j<i; j++){
            std::cout << "*";
        }
        std::cout << "" << std::endl;
    }
    
}