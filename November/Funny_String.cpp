#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
string funnyString(string s)
{
    string revstr = s;
    reverse(revstr.begin(), revstr.end());
    cout << revstr << endl;
    int d1, d2;
    for (int i = 0; i < s.size()-1; i++)
    {
        d1 = abs(int(revstr[i] - int(revstr[i])));
        d2 = abs(int(revstr[i] - int(revstr[i])));
        if (d1 != d2)
            cout << "Not funny";
    }
    cout << "Funny";
    return "";
}
int main()
{
    funnyString("lmnop");
    return 0;
}