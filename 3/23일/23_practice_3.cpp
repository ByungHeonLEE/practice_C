#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
int main(){
    int a;
    cout << "countdown: \n";
    for (int i = 10; i>0; --i){
        cout << i << '\n';
        this_thread::sleep_for (chrono::seconds(1));
    }

    cout << "Lift off!\n";
    return 0;
}