#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
void encryption(string s)
{
    cout << s.size() << endl;
    string n = "";
    for (auto i : s)
    {
        if (i != ' ')
            n.push_back(i);
    }
    int rows = floor(sqrt(n.length()));
    cout << rows << endl;
    int cols = ceil(sqrt(n.length()));
    cout << cols << endl;
    if (rows * cols < n.size())
        rows++;
    int r = 0;
    vector<string> str;
    string build = "";
    rows += 1;
    for (int i = 0; i <= n.size(); i++)
    {
        build += n[i];
        ++r;
        if (r == rows)
        {
            str.push_back(build);
            build = "";
            r = 0;
        }
    }
    string ans = "";
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            ans += str[i][j];
        }
        ans += " ";
    }
    cout << ans;
}
int main()
{
    string s;
    // getline(cin, s);
    encryption("haveaniceday");
    return 0;
}