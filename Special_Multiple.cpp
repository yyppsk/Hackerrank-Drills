#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;
string solve(int n)
{
    queue<long long> qu;
    qu.push(9);
    while (!qu.empty())
    {
        long long temp = qu.front();
        qu.pop();
        // cout << "Dividing " << temp << " by 7" << endl;
        if (temp % n == 0)
        {
            return to_string(temp);
        }
        else
        {
            qu.push(temp * 10);
            qu.push(temp * 10 + 9);
        }
    }
    return "hello";
}
int main()
{

    cout << solve(5);
    return 0;
}