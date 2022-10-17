#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
#define MOD 1000000007
int substrings(string str)
{
    long long int num = str.length();
    long long int dp[num];
    dp[0] = str[0] - '0';
    int res = dp[0];
    for (long long int i = 1; i < num; i++)
    {
        long long int numi = str[i] - '0';
        dp[i] = ((i + 1) * numi + (10 * dp[i - 1])) % MOD;
        res = (res + dp[i]) % MOD;
    }
    return res;
}
int main()
{
    int sum;
    string n;
    getline(cin, n);
    sum = substrings(n);
    cout << sum;
    return 0;
}