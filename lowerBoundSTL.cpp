#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void result(int query)
{
}
int main()
{
    int c;
    cin >> c;
    vector<int> numbers(c);
    for (auto &i : numbers)
        cin >> i;
    // for(auto it = numbers.begin(); it!= numbers.end(); it++)
    // cout<<*it<<" ";
    int numq;
    cin >> numq;
    int query;
    vector<int>::iterator low1, it;
    for (int i = 0; i < numq; i++)
    {
        cin >> query;
        low1 = lower_bound(numbers.begin(), numbers.end(), query);
        if (query == numbers[low1 - numbers.begin()])
            cout << "Yes " << low1 - numbers.begin() + 1 << "\n";
        else
            cout << "No " << (low1 - numbers.begin()) + 1 << "\n";
    }
    // cout<< "\nlower_bound for element at position : "<< (low1 - numbers.begin());
    return 0;
}