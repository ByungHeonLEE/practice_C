#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> name;
vector<int> backNumber;

void findPlayer(string n)
{
    auto iter = find(name.begin(), name.end(), n);
    cout << "Is " << n << " in team? " << (iter != name.end() ? "Yes" : "NO") << endl;
    if (iter != name.end())
    {
        int numSon = backNumber[(int)distance(name.begin(), iter)];
        cout << "Back number of " << n << ": " << numSon << endl;
    }
}

int main()
{
    name.push_back("son heungmin");
    name.push_back("cho hyunwoo");
    name.push_back("ki sungyong");
    name.push_back("lee yong");
    name.push_back("lee seungwoo");

    backNumber.push_back(7);
    backNumber.push_back(23);
    backNumber.push_back(2);
    backNumber.push_back(16);
    backNumber.push_back(10);

    findPlayer("son heungmin");
    findPlayer("jeelly");
    return 0;
}