
#include <iostream>

using namespace std;

int main()
{
    int input_num, first_term = 0, second_term = 1, next_term = 1;

    cout << "Enter the number of terms you want: ";
    cin >> input_num;
    cout << "Result of Fibonacci Series: ";

    for (int i = 0; i < input_num; ++i)
    {

        if (i == 0)
            cout << first_term << " ";

        else if (i == 1)
            cout << second_term << " ";

        else if (i == 2)
            cout << first_term + second_term << " ";

        else
        {
            first_term = second_term;
            second_term = next_term;
            next_term = first_term + second_term;

            cout << next_term << " ";
        }
    }
}