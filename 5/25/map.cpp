#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

map<string, int> player;

void findPlayer(string n)
{
    auto iter = player.find(n);
    cout << "Is " << n << " in team? " << (iter != player.end() ? "Yes" : "NO") << endl;
    if (iter != player.end())
    {
        int numSon = player[n];
        cout << "Back number of " << n << ": " << numSon << endl;
    }
}

int main()
{
    player.insert(make_pair("son heungmin", 7));
    player.insert(make_pair("cho hyunwoo", 23));
    player.insert(make_pair("ki sungyong", 16));
    player.insert(make_pair("lee yong", 2));
    player.insert(make_pair("lee seungwoo", 10));

    findPlayer("son heungmin");
    findPlayer("jeelly");
    return 0;
}