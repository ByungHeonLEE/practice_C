#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

class studentClass
{
public:
    studentClass() {}
    studentClass(string _name, int _num, float _grade) : name(_name), studentNum(_num), grade(_grade) {}
    int getNumber() { return studentNum; }
    string getName() { return name; }
    float getGrade() { return grade; }
    bool operator<(const studentClass &s) const { return studentNum < s.studentNum; }

public:
    int studentNum;
    string name;
    float grade;
};

set<studentClass> student;

struct find_by_num
{
    find_by_num(const int &studentNum) : studentNum(studentNum) {}
    bool operator()(const studentClass &student)
    {
        return student.studentNum == studentNum;
    }

private:
    int studentNum;
};

void insertStudent(string n, int num, float g)
{
    student.insert(studentClass(n, num, g));
}

void printStudent(int num)
{
}

void printAll()
{
    for (auto s : student)
        cout << s.getName() << " " << s.getNumber() << " " << s.getGrade() << endl;
}

int main()
{
    while (true)
    {

        int option; //for implement

        string name;
        int studentnumber;
        float grade; //for insert student

        int number; //for erase

        int numb; //for print

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
            cin >> name >> studentnumber >> grade;

            set<studentClass>::iterator iter = find_if(student.begin(), student.end(), find_by_num(studentnumber));
            if ((studentnumber >= 10000000) && (studentnumber < 100000000) && (grade >= 0.0) && (grade <= 4.31))
            {
                if (iter != student.end())
                {
                    // we found something
                    cout << "already in!" << endl;
                }
                else if (iter == student.end())
                {
                    insertStudent(name, studentnumber, grade);
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
            set<studentClass>::iterator iter = find_if(student.begin(), student.end(), find_by_num(number));
            if ((number >= 10000000) && (number < 100000000))
            {
                if (iter != student.end())
                {
                    student.erase(iter);
                    cout << "erased" << endl;
                }
                else if (iter == student.end())
                {
                    cout << "That student is not in this list" << endl;
                }
            }
            else
            {
                cout << "wrong input!" << endl;
            }

            cin.clear();
        }

        else if (option == 3)
        {
            cout << "insert the student number" << endl;
            cin >> numb;
            set<studentClass>::iterator iter = find_if(student.begin(), student.end(), find_by_num(numb));
            if ((numb >= 10000000) && (numb < 100000000))
            {
                if (iter != student.end())
                {
                    for (auto s : student)
                    {
                        if (s.getNumber() == numb)
                        {
                            cout << s.getName() << " " << s.getNumber() << " " << s.getGrade() << endl;
                        }
                    }
                }
                else if (iter == student.end())
                {
                    cout << "That student is not in this list" << endl;
                }
            }
            else
            {
                cout << "wrong input!" << endl;
            }
            cin.clear();
        }

        else if (option == 4)
        {
            printAll();
            cin.clear();
        }

        else if (option == 5)
        {
            return 0;
        }
    }
}
