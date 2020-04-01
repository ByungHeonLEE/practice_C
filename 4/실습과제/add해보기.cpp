#include <iostream>
#include <vector>
#include <ctime>
#include <stdio.h>
#include <cstdlib>

using namespace std;
int p, q, r;

int generateRandomNumberInRange(int min, int max)
{
    /* Implement: generate random number in range*/
    return rand() % (max - min + 1) + min;
}

void print_a()
{
    /* Implement: define and add two matrices, and print the result */

    vector<vector<int>> m(p, vector<int>(q));
    vector<vector<int>> n(m);

    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < m[i].size(); j++)
            m[i][j] = generateRandomNumberInRange(0, 2);
    }

    for (int i = 0; i < n.size(); i++)
    {
        for (int j = 0; j < n[i].size(); j++)
            n[i][j] = generateRandomNumberInRange(0, 2);
    }

    /* print vector */
    cout << "Matrix m" << endl;
    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < m[i].size(); j++)
            cout << m[i][j] << " ";
        cout << endl;
    }

    cout << "Matrix n" << endl;
    for (int i = 0; i < n.size(); i++)
    {
        for (int j = 0; j < n[i].size(); j++)
            cout << n[i][j] << " ";
        cout << endl;
    }

    cin.ignore();
    cin.get();

    cout << "result" << endl;

    vector<vector<int>> answer(p, vector<int>(q));
    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = 0; j < answer[i].size(); j++)
        {
            answer[i][j] = (m[i][j] + n[i][j]);
        }
    }

    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = 0; j < answer[i].size(); j++)
        {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
}
//void printMatrix(const vector<vector<int>> &mat)

int main()
{
    /* Implement: define and add two matrices, and print the result */
    cout << "Enter p and q ([p x q] + [p x q])" << endl;
    cin >> p;
    cin >> q;

    print_a();

    return 0;
}
