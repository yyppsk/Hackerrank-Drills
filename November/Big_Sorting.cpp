#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool camp(string a, string b)
{
    cout << a << " : " << b << endl;
    if (a.size() == b.size())
    {
        int i = 0;
        while (a[i] == b[i] && i < a.size() && i < b.size())
        {
            i++;
        }
        return a[i] < b[i];
    }
    else
    {
        return a.size() < b.size();
    }
}
vector<string> bigSorting(vector<string> a)
{
    sort(a.begin(), a.end(), camp);
    return a;
}
int main()
{
    vector<string> arr = {"31415926535897932384626433832795", "1", "3", "10", "3", "5"};
    vector<string> res = bigSorting(arr);
    for (auto i : res)
    {
        cout << i << " ";
    }
    return 0;
}