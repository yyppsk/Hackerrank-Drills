#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void appendAndDelete(string s, string t, int k)
{
    cout << t.size() << endl;
    int minim = min(t.size(), s.size());
    int i = 0;
    int j = 0;
    int p = 0;
    int required = 0;
    while (i < t.size())
    {
        cout << "Comparing " << s[i] << " With " << s[j] << endl;
        if (s[i] != t[j])
        {
            p = i;
            break;
        }
        ++i;
        ++j;
    }
    if (p == 0)
    {
        required = s.size() + t.size();
        if (required <= k)
        {
            cout << "Yes\n"
                 << endl;
        }
    }
    if (p > 0)
    {
        required = s.size() + t.size() - 2 * p;
        if (k < required)
            cout << "No";
        if (required == k)
            cout << "yes";
        else if (k > required)
        {
            int extra = k - required;
            if (extra % 2 == 0)
                cout << "yes";
            else
                cout << "No";
        }
    }
    cout << "No";
}
int main()
{
    string s1 = "aaaaaaaaaa", s2 = "aaaaa";
    int k = 7;
    appendAndDelete(s1, s2, k);
    return 0;
}