#include <iostream>

enum GRADE { D = 60, C = 70, B = 80, A = 90 };
int main() {
    int math = 68;
    int english = 80;
    int science = 94;

    std::cout << "math score: " << math << std::endl;
    std::cout << "english score: " << english << std::endl;
    std::cout << "science score: " << science << std::endl << std::endl;

    std::cout << "average: " <<(float)(math + english + science) / 3 << std::endl;

    std::cout << "math grade: ";
    if (math < D) std::cout << 'F' << std::endl;
    else if (math < C) std::cout << 'D' << std::endl;
    else if (math < B) std::cout << 'C' << std::endl;
    else if (math < A) std::cout << 'B' << std::endl;
    else std::cout << 'A' << std::endl;

    std::cout << "english grade: ";
    std::cout << ((english < D) ? 'F' : ((english < C) ? 'D' : ((english < B) ? 'C' : ((english < A) ? 'B' : 'A')))) << std::endl;
}