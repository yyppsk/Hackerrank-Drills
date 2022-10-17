#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
vector<int> largestPermutation(int k, vector<int> arr)
{
    int size = arr.size();
    int pos[size + 1];
    for (int i = 0; i < size; ++i)
        pos[arr[i]] = i;
    for (int i = 0; i < size && k; ++i)
    {
        //printf("When i = %d and arr[%d](%d) == size - i(%d - %d) => %d then : \n", i, i, arr[i], size, i, size - i);
        if (arr[i] == size - i)
            continue;
        int temp = pos[size - i];
        //printf("temp(%d) = pos[size(%d) - i(%d)](%d) \n ", temp, size, i, pos[size - i]);
        pos[arr[i]] = pos[size - i];
        pos[size - i] = i;

        swap(arr[temp], arr[i]);
        --k;
    }
    return {};
}
int main()
{
    vector<int> arr = {1, 2, 3, 4};
    largestPermutation(1, arr);
    return 0;
}