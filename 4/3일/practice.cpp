#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream ifs("data.txt");
    float val;
    vector<vector<float>> points;
    while (ifs >> val, !ifs.eof())
    {
        points.push_back(vector<float>());
        points.back().push_back(val);
        ifs >> val;
        points.back().push_back(val);
    }

    for (int i = 0; i < points.size(); i++)
        cout << points[i].front() << ", " << points[i].back() << endl;

    return 0;
}