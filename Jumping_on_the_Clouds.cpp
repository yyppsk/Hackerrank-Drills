#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> b;
    int size;
    int t;
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &t);
        b.push_back(t);
    }
    if(b.size() == 1)
        return 0;

    int steps = 0;
    int one = 0, zero = 0;
    int tracker = 0;
    for (int j = 0; j < size; j++)
    {
        // printf("Jumping from %d[%d]\n", j, b[j]);
        if (b[tracker + 2] == 0)
        {
            // printf("Jumped from %d[%d] to %d[%d]\n", j, b[j], j + 2, b[j + 2]);
            steps = steps + 1;
            tracker = tracker + 1;
            //cout << "Tracker+2 " << tracker << endl;
            //cout << "steps" << steps << endl;
        }
        else if (b[tracker + 1] == 0)
        {
            // printf("Jumped from %d[%d] to %d[%d]\n", j, b[j], j + 1, b[j + 1]);
            steps = steps + 1;
            //cout << "Tracker+1 " << tracker << endl;
            //cout << "steps" << steps << endl;
        }
        cout << "Size checker :" << j << endl;
    }
    cout << steps;
    return 0;
}