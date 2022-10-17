#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
void miniMaxSum(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    cout << endl;
    long min = 0, max = 0;
    for (auto v : arr)
    {
        cout << min << endl;
        min = v + min;
    }
    min = min - arr[4];
    cout << min << endl;
    sort(arr.begin(), arr.end(), greater<int>());
    for (auto v : arr)
    {
        max = v + max;
    }
    max = max - arr[4];
    cout << max << endl;
    // printf("%ld %ld")
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> vec = {793810624, 895642170, 685903712, 623789054, 468592370};
    miniMaxSum(vec);
    return 0;
}