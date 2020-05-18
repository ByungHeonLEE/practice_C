#include <iostream>
#include <vector>

using namespace std;

void printVec(vector<int> vec){
    cout << "size of vec: " << vec.size() << endl;
    cout << "vec: ";
    for (int i : vec)
        cout << i << ' ';
    cout << endl;
}

int main(){
    vector<int> vec;

    for (int i = 0; i < 3; ++i)
        vec.push_back(i);
    printVec(vec);

    vec.clear();
    vec.push_back(1);
    vec.resize(10, 5);
    printVec(vec);

    return 0;
}