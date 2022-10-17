#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
long candies(int n, vector<int> arr)
{
    int size = arr.size();
    vector<int> vecL(n, 1);
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            vecL[i] = max(vecL[i], vecL[i - 1] + 1);
        }
    }
    for (int last = size - 1; last > 0; last--)
    {
        if (arr[last] < arr[last - 1])
        {
            vecL[last - 1] = max(vecL[last] + 1, vecL[last - 1]);
        }
    }
    /*
    for (int last = size - 1; last > 0; last--)
    {
        if (arr[last - 1] > arr[last])
        {
            vecR[last - 1] = vecR[last - 1] + vecR[last];
        }
    }
    */
    // 1 2 1 2 1 2 3 4 1 1
    // 1 3 1 3 1 2 3 6 2 1
    /*
    for (auto i : vecL)
    {
        cout << i << " ";
    }*/
    int sum = 0;
    /*
    for (int i = 0; i < size; i++)
    {
        sum = sum + max(vecL[i], vecR[i]);
    }
    */
    sum = accumulate(vecL.begin(), vecL.end(), sum);
    cout << sum;
    return sum;
}
int main()
{
    vector<int> array;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d", &t);
        array.push_back(t);
    }
    candies(n, array);
    return 0;
}