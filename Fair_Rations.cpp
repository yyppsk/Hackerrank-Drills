#include<iostream>
#include<vector>
#include <string> 
using namespace std;
string fairRations(vector<int> B) {
    for (int i = 0; i < B.size()-1; i++){
        if(B[i] % 2 != 0){
            B[i] = B[i]+1;
            if(B[i-1] % 2 == 0)
                B[i-1] = B[i-1]+1;
            else 
                B[i+1] = B[i+1] + 1;
        }
    }
    for (auto i: B) {
    std::cout << i << ' '; // will print: "a b c"
}
}
int main()
{
    vector<int> t = {2, 3, 4, 5, 6};
    cout<<fairRations(t);
    return 0;
}