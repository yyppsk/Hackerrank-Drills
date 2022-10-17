#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void biggerIsGreater(string w)
{
    int i = w.size() - 2;
    int j = w.size() - 1;
    while (i >= 0 && w[i + 1] < w[i])
    {
        i--;
        if (i == -1)
        {
            cout << "No";
            return;
        }
    }
    while (j >= i && w[j] < w[i])
    {
        j--;
    }
    // swap
    swap(w[i], w[j]);
    string str = "";
    for (int j = 0; j < i + 1; j++)
    {
        str = str + w[j];
    }
    string end = "";
    for (int j = i + 1; j < w.size(); j++)
    {
        end = end + w[j];
    }
    reverse(end.begin(), end.end());
    string result = str + end;
    cout << result << endl;
}

int main()
{
    string s = "725876";
    biggerIsGreater(s);
    return 0;
}