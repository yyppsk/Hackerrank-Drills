#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int hourglassSum(vector<vector<int>> arr)
{
    int maxSum = -63;
    for (int i = 0; i < arr.size() - 2; i++)
    {
        for (int j = 0; j < arr[0].size()-2; j++)
        {
            int currentSum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            maxSum = max(maxSum, currentSum);
        }
    }

    return maxSum;
}
int main()
{   
    int a;
    cin>>a;
    vector<vector<int>> vect{
        {1, 1, 1, 0, 0, 0},
        {0, 1, 0, 0, 0, 0},
        {1, 1, 1, 0, 0, 0},
        {0, 0, 2, 4, 4, 0},
        {0, 0, 0, 2, 0, 0},
        {0, 0, 1, 2, 4, 0}};
    cout << hourglassSum(vect);
    return 0;
}