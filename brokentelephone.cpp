#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int choice;
    scanf("%d", &choice);
    while (choice--)
    {
        vector<int> arr;
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            int temp;
            scanf("%d", &temp);
            arr.push_back(temp);
        }
        int change = 0;
        int original = arr[0];
        for (int i = 1; i < n; i++)
        {
            printf("Comparing %d with %d \n", original, arr[i]);
            if (original != arr[i])
                change++;
            cout << "C: " << change << endl;
            original = arr[i];
        }
        printf("%d\n", original);
    }
    return 0;
}
