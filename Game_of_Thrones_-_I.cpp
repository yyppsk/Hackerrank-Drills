#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gameOfThrones' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string gameOfThrones(string s) {
    for(auto i = s.begin(); i < s.begin(); ++i){
        cout<<*i<<endl;
    }
    return "YES";
}

int main()
{
    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    cout << result << "\n";


    return 0;
}
