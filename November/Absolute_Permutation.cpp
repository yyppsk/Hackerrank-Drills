#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
template <typename T>
void printResult(vector<T> const &v)
{

    // Traverse the vector v
    for (auto i : v)
    {
        cout << i << ' ';
    }
    cout << '\n';
}
template <typename T>
vector<T> slicing(vector<T> const &v,
                  int X, int Y)
{

    // Begin and End iterator
    auto first = v.begin() + X;
    auto last = v.begin() + Y + 1;

    // Copy the element
    vector<T> vector(first, last);

    // Return the results
    return vector;
}
vector<int> absolutePermutation(int n, int k)
{
    vector<int> builder;
    int i = 0;
    while (i < n + 1)
    {
        builder.push_back(i);
        i++;
    }
    vector<int> ans;

    // Function Call
    ans = slicing(builder, 0, n);
    if (k == 0)
    {
        return ans;
    }
    if (n % 2 == 1)
        return {-1};
    for (int i = 1; i < n - k + 1; i++)
    {
        if ((builder[i + k] - builder[i]) == k)
            swap(builder[i], builder[i + k]);
        else if (abs(i - builder[i]) != k)
            return {-1};
    }
    for (int i = n - k + 1; i < n; i++)
    {
        if (abs(i - builder[i]) != k)
            return {-1};
    }
    vector<int> ans;

    // Function Call
    ans = slicing(builder, 1, n);
    return ans;
}
int main()
{
    vector<int> res = absolutePermutation(8, 3);
    for (auto i : res)
    {
        cout << i << " ";
    }
    return 0;
}