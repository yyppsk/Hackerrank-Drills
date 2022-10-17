#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
void miniMaxSum(vector<int> arr)
{
    long min = arr[0];
    long max = arr[0];
    long sum = 0;

    for (auto i : arr)
    {
        sum += i;
        if (i < min)
            min = i;
        if (i > max)
            max = i;
    }
    printf("%ld %ld", sum - max, sum - min);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> vec = {1, 2, 3, 4, 5};
    miniMaxSum(vec);
    return 0;
}
