#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
vector<int> stones(int n, int a, int b)
{
    if (a > b)
    {
        swap(a, b);
    }
    set<int> sett;
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        int ans = i * a + (n - i - 1) * b;
        sett.insert(ans);
    }
    for (auto i : sett)
        result.push_back(i);
    sort(result.begin(), result.end());
    return result;
}
int main()
{
    vector<int> res = stones(4, 10, 100);
    for (auto i : res)
    {
        cout << i << " ";
    }

    return 0;
}