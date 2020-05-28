#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> name;
vector<int> studentNum;
vector<float> grade;

int main()
{
    int option; //for implement

    string studentName;
    int studentnumber;
    float studentGrade; //for insert student

    int number; //for erase

    int numb; //for print

    while (true)
    {
        cout << "choose the option" << endl;
        cout << "1: Insert student" << endl;
        cout << "2: Erase student" << endl;
        cout << "3: Print student" << endl;
        cout << "4: Print all students" << endl;
        cout << "5: exit" << endl;

        cin >> option;

        if (option == 1)
        {
            cout << "insert the name and student number and grade" << endl;
            cin >> studentName >> studentnumber >> studentGrade;
            if ((studentnumber >= 10000000) && (studentnumber < 100000000) && (studentGrade >= 0.0) && (studentGrade <= 4.31))
            {
                auto iter = find(studentNum.begin(), studentNum.end(), studentnumber);

                if (iter != studentNum.end())
                {
                    cout << "already in!" << endl;
                }
                else if (iter == studentNum.end())
                {
                    name.push_back(studentName);
                    studentNum.push_back(studentnumber);
                    grade.push_back(studentGrade);
                }
            }
            else
            {
                cout << "wrong input!" << endl;
            }
            cin.clear();
        }

        else if (option == 2)
        {
            cout << "insert the student number" << endl;
            cin >> number;
            if ((number >= 10000000) && (number < 100000000))
            {
                auto iter = find(studentNum.begin(), studentNum.end(), number);
                if (iter == studentNum.end())
                {
                    cout << "That student is not in this list" << endl;
                }
                else if (iter != studentNum.end())
                {
                    int gotyou = (int)distance(studentNum.begin(), iter);
                    name.erase(name.begin() + gotyou);
                    studentNum.erase(studentNum.begin() + gotyou);
                    grade.erase(grade.begin() + gotyou);

                    cout << "erased" << endl;
                }
            }
            else
            {
                cout << "wrong input. please insert 8 digits number" << endl;
            }
            cin.clear();
        }

        else if (option == 3)
        {
            cout << "insert the student number" << endl;
            cin >> numb;
            if ((numb >= 10000000) && (numb < 100000000))
            {
                auto iter = find(studentNum.begin(), studentNum.end(), numb);
                if (iter == studentNum.end())
                {
                    cout << "That student is not in this list" << endl;
                }
                else if (iter != studentNum.end())
                {
                    int gotcha = (int)distance(studentNum.begin(), iter);
                    cout << name[gotcha] << " " << studentNum[gotcha] << " " << grade[gotcha] << endl;
                }
            }
            else
            {
                cout << "wrong input. please insert 8 digits number" << endl;
            }
            cin.clear();
        }

        else if (option == 4)
        {
            auto iter = find(studentNum.begin(), studentNum.end(), studentnumber);
            for (size_t i = 0; i < name.size(); i++)
            {
                cout << name[i] << " " << studentNum[i] << " " << grade[i] << endl;
            }
            cin.clear();
        }
        else if (option == 5)
        {
            return 0;
        }
    }
}
