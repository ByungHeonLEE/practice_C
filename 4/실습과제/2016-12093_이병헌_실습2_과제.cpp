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

void addTwoMatrices()
{
    cout << "Enter p and q ([p x q] + [p x q])" << endl;
    cin >> p >> q;
    /* Implement: define and add two matrices, and print the result */

    if (p < 1 || q < 1) //exception!
    {
        cout << "Vector's size should be bigger than 1" << endl;
        return;
    }

    /* define two p x q vectors */
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
    /* press enter */
    cin.ignore();
    cin.get();
    cout << "result" << endl;

    /* add two vectors */
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

void multiplyTwoMatrices()
{
    cout << "Enter p, q and r ([p x q] + [q x r])" << endl;
    cin >> p >> q >> r;

    /* Implement: define and multiplly two matrices, and print the result */

    if (p < 1 || q < 1 || r < 1) //exception!
    {
        cout << "Vector's size should be bigger than 1" << endl;
        return;
    }

    /* define p x q vector and q x r vector */
    vector<vector<int>> m(p, vector<int>(q));
    vector<vector<int>> n(q, vector<int>(r));

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
    /* press enter */
    cin.ignore();
    cin.get();
    cout << "Result" << endl;

    /* multiply two vectors */
    vector<vector<int>> answer(p, vector<int>(r));
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < r; j++)
        {
            for (int k = 0; k < q; k++)
            {
                answer[i][j] += m[i][k] * n[k][j];
            }
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

int main()
{
    srand(time(NULL));
    /* Implement: create menu */
    while (1)
    {
        char x;
        printf("A: add\nM: multiply\nE: end\n");
        cout << "Select menu :";
        cin >> x;
        if (x == 'e' || x == 'E')
            break;
        else if (x == 'a' || x == 'A')
        {
            addTwoMatrices();
            break;
        }
        else if (x == 'm' || x == 'M')
        {
            multiplyTwoMatrices();
            break;
        }

        else
            cout << "wrong!" << endl;
        continue;
    }

    return 0;
}