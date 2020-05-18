#include <iostream>
#include <random>
#include <chrono>
#include <tuple>

using namespace std;

int randomInt(int m, int n)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(m, n);
    int result = dis(gen);
    return result;
}

int input;

int lower = 1;
int upper = 100;
bool finish;

auto range = tie(lower, upper);

void findNumber()
{
    cout << "Input between " << lower << " and " << upper << " :";
    cin >> input;
}

int main()
{
    int target = randomInt(1, 100);
    chrono::system_clock::time_point Starttime = chrono::system_clock::now();

    while (finish = 1)
    {
        findNumber();

        if (input == target)
        {
            cout << "Correct! Target number is " << target << endl;
            finish == 1;
            break;
        }

        else if (input > target)
        {
            cout << "Down!" << endl;
            upper = (input - 1);
        }

        else if (input < target)
        {
            cout << "UP!" << endl;
            lower = (input + 1);
        }
    }
    chrono::system_clock::time_point Endtime = chrono::system_clock::now();
    chrono::duration<double> Default = Endtime - Starttime;
    auto sec = chrono::duration_cast<chrono::seconds>(Endtime - Starttime);
    auto hours = chrono::duration_cast<chrono::hours>(Endtime - Starttime);
    auto minutes = chrono::duration_cast<chrono::minutes>(Endtime - Starttime);
    double ms = Default.count();
    double ms_2 = floor(ms * 1000.f + 0.5) / 1000.f;

    cout << "Time taken: " << hours.count() << "h " << minutes.count() << "m "
         << ms_2 << "s" << endl;
    return 0;
}