#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void almostSorted(vector<int> arr)
{
    int count = 0;
    int flag = 1;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            flag = 0;
            count++;
        }
    }
    if (flag)
    {
        cout << "yes";
    }
    else
    {
        if (count > 1)
        {
            cout << "More than 1\n";
        }
        else
        {
            cout << "less than 1\n";
        }
    }
}
int main()
{
    vector<int> arr = {9, 2, 3, 4, 13, 6};
    almostSorted(arr);
    return 0;
}