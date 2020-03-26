#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v(10);
    cout << v.size() << endl;
    for(vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    for (int i= 0; i < 5; ++i)
    v.push_back(i*10);

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
}