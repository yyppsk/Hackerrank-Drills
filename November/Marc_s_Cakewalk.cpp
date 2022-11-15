#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;
void solve()
{
}
int main()
{
    long dist = 0;
    int i = 0;
    vector<int> calorie = {7, 4, 9, 6};
    sort(calorie.begin(), calorie.end(), greater<int>());
    for (int c : calorie)
    {
        dist += pow(2, i) * c;
        i += 1;
    }
    cout << dist << endl;
    return 0;
}