#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, row;
    int start = 1;
    cout << "enter number of rows" << endl;
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        if (i % 2 == 0)
            start = 0;
        else
            start = 1;
        for (j = 1; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
