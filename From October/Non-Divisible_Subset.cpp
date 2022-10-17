#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;
int nonDivisibleSubset(int k, vector<int> s)
{
    unordered_map<int, int> map;
    for (int i = 0; i < s.size() - 1; i++)
    {
        map[s[i] % k]++;
    }
    for (auto i : map)
    {
        cout << i.first << ":" << i.second << endl;
    }
    int ans = min(map[0], 1);
    return 0;
}
int main()
{
    vector<int> arr = {19, 10, 12, 10, 24, 25, 22};
    int k = 4;
    nonDivisibleSubset(k, arr);
    return 0;
}