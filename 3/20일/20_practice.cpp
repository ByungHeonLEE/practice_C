#include <iostream>

int main() {
    const float pi = 3.14;
    enum SHAPE2D { LINE = 1, SQUARE, CIRCLE = 4};

    int length_line = 2;
    float length_square = 1.5;
    double radius_circle = 3.0;

    std::cout << "line length: " << length_line << std::endl;
    std::cout << "area of square: " << length_square * length_square << std::endl;
    std::cout << "area of circle: "<< pi*radius_circle*radius_circle << std::endl;
    return 0;
}