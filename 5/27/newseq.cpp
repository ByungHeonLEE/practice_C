#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

map<string, int, float> students;

void findStudent(int n)
{
    auto iter = students.find(n);
    if (iter == students.end())
        cout << "already in!" << endl;
    else
}

void insertStudent(string n, int num, float g)
{
    students.insert(make_pair)
}

void eraseStudent(int num)
{

    cout << "erased" << endl;
}

void printStudent(int num)
{
}

void printAll()
{
    for (auto s : student)
        cout << s.getName() << " " << s.getNumber() << " " << s.getGrade() << endl;
}

void init()
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
    switch (option)
    {
    case 1 /* constant-expression */:

        cout << "insert the name and student number and grade" << endl;
        cin >> name >> studentnumber >> grade;
        auto iter = students.find(studentnumber);
        if (iter == students.end())
            cout << "already in!" << endl;
        else
            insertStudent(name, studentnumber, grade);
        init();
    case 2:
        cout << "insert the student number" << endl;
        cin >> number;
        eraseStudent(number);
        init();
    case 3:
        cout << "insert the student number" << endl;
        cin >> numb;
        printStudent(numb);
        init();
    case 4:
        printAll();
        init();
    case 5:
        break;

    default:
        break;
    }
}

int main()
{
    init();
    return 0;
}
