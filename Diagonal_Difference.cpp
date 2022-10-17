#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int diagonalDifference(vector<vector<int>> arr)
{
    int primary = 0, secondary = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (i == j)
                primary += arr[i][j];
        }
    }
    // cout<<"P: "<<primary<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = arr.size(); j >= 0; j--)
        {
            if (i + j == arr.size() - 1)
                secondary += arr[i][j];
        }
    }
    // cout<<"Sec: "<<secondary<<endl;
    return abs(primary - secondary);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> vec = {{11, 2, 4}, {4, 5, 6}, {10, 8, -12}};
    cout << diagonalDifference(vec);
    return 0;
}