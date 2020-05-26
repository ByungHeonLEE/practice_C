#include <iostream>
#include <set>
#include <string>
using namespace std;
class studentClass
{
public:
    studentClass() {}
    studentClass(int _num, string _name, float _grade) : number(_num), name(_name), grade(_grade) {}
    int getNumber() const { return number; }
    string getName() const { return name; }
    float getGrade() const { return grade; }
    bool operator<(const studentClass &p) const { return number < p.number; }

private:
    int number;
    string name;
    float grade;
};

set<studentClass> studentList;

struct find_by_number
{
    find_by_number(const int &number) : number(number) {}
    bool operator()(const studentClass &studentClass)
    {
        return studentClass.getNumber() == number;
    }

private:
    int number;
};

int main()
{
    cout << "Welcome to the student management program!" << endl;

    cout << "i: insert stuent" << endl;
    cout << "e: erase stuent" << endl;
    cout << "p: print stuent" << endl;
    cout << "a: print all stuents" << endl;
    cout << "q: exit the program" << endl;

    while (true)
    {
        cout << "Please input i or e or p or a or q" << endl;
        char input;
        cin >> input;
        switch (input)
        {
        case 'i':
        {
            cout << "Insert mode\n";
            int number;
            string name;
            float grade;

            while (true)
            {
                cout << "Please input the student number by form of 8 digits integer: ";
                cin >> number;

                if (cin.fail())
                {
                    cout << "Error! Please enter an integer number\n";
                    cin.clear();
                    cin.ignore(INT_MAX, '\n');
                    continue;
                }
                else if (!((10000000 <= number) && (number < 100000000)))
                {
                    cout << "Error! Please enter an 8 digit integer\n";
                    cin.clear();
                    cin.ignore(INT_MAX, '\n');
                    continue;
                }
                else
                {
                    break;
                }
            }

            set<studentClass>::iterator result = find_if(studentList.begin(), studentList.end(),
                                                         find_by_number(number));

            if (result != studentList.end())
            {
                cout << "There is student who already registered by input student Number\n";
                break;
            }

            cout << "Input the student name by form of one English word: ";
            cin >> name;

            while (true)
            {
                cout << "Input the student grade by form of floating number between 0.0 and 4.3: ";
                cin >> grade;
                if (cin.fail())
                {
                    cout << "Error! Please enter a float number\n";
                    cin.clear();
                    cin.ignore(INT_MAX, '\n');
                    continue;
                }
                else if (!((0.0 <= grade) && (grade < 4.3)))
                {
                    cout << "Error! Please enter a float between 0.0 and 4.3\n";
                    cin.clear();
                    cin.ignore(INT_MAX, '\n');
                    continue;
                }
                else
                {
                    break;
                }
            }

            studentList.insert(studentClass(number, name, grade));
            cout << "Insert completed.\n";
            break;
        }
        case 'e':
        {
            int number;
            cout << "Erase mode\n";
            cout << "Input the student number: ";

            cin >> number;

            set<studentClass>::iterator result = find_if(studentList.begin(), studentList.end(),
                                                         find_by_number(number));

            if (result != studentList.end())
            {
                studentList.erase(result);
            }
            else
            {
                cout << "There is no student who has studentNumber " << number << endl;
                break;
            }

            cout << "Erase completed.\n";
            break;
        }

        case 'p':
        {
            int number;
            cout << "print mode\n";
            cout << "input the student number: ";
            cin >> number;

            set<studentClass>::iterator result = find_if(studentList.begin(), studentList.end(),
                                                         find_by_number(number));

            if (result != studentList.end())
            {
                for (auto s : studentList)
                {
                    if (s.getNumber() == number)
                    {
                        cout << s.getNumber() << " " << s.getName() << " " << s.getGrade() << endl;
                    }
                }
            }
            else
            {
                cout << "There is no student who has student Number " << number << endl;
            }

            break;
        }

        case 'a':
        {
            for (auto s : studentList)
            {
                cout << s.getNumber() << " " << s.getName() << " " << s.getGrade() << endl;
            }
            break;
        }

        case 'q':
        {
            return 0;
        }

        default:
            cout << "Wrong input!\n"
                 << endl;
            break;
        }
    }

    return 0;
}
