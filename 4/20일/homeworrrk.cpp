#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
using namespace std;
using namespace string_literals;
int main()
{
    string str = u8"abc가나다";
    size_t i = 0;
    vector<string> chars;
    while (i < str.size())
    {
        int char_size = 0;
        if ((str[i] & 0b11111000) == 0b11110000)
            char_size = 4;
        else if ((str[i] & 0b11110000) == 0b11100000)
            char_size = 3;
        else if ((str[i] & 0b11100000) == 0b11000000)
            char_size = 2;
        else if ((str[i] & 0b10000000) == 0b00000000)
            char_size = 1;
        else
        {
            cout << "error" << endl;
            char_size = 1;
        }
        chars.push_back(str.substr(i, char_size));
        i += char_size;
    }
    SetConsoleOutputCP(CP_UTF8);
    for (int j = 0; j < chars.size(); j++)
    {
        cout << chars[j] << endl;
    }
    cout << "string size : " << chars.size() << endl;
}