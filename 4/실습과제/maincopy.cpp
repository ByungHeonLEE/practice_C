#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{

    //srand(time(NULL));
    /* Implement: create menu */
    cout << "A: add M: multiply E: end " << endl;
    while (1)
    {
        cout << "Select menu: ";
        char x;
        cin >> x;
        if (x == 'e' || x == 'E')
            break;
        else if (x == 'a' || x == 'A')
            break;
        else if (x == 'm' || x == 'M')
            break;
        else
            cout << "wrong!" << endl;
        continue;
    }

    return 0;
}
