#include <iostream>

using namespace std;
int main(){
    int a, b;

    while(1){
        cout << "a: ";
        cin >> a;
        if(cin.good()) 
        //현재 buffer 검색해서 buffer가 비어있으면
        break;
        
        if(cin.fail()){
            cout << "wrong input" << endl;
            cin.clear();
            cin.ignore(numeric_limits <streamsize> ::max(), '\n');
        
        }
    }
    
    cout << "b: ";
    cin >> b;

    cout << "sum: " << a+b << endl;
}