// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, row, row1;
    cout << "enter the number of rows";
    cin >> row;
    row1 = row / 2;

    for (i = 1; i < row1; i++)
    {
        for (j = i; j <= row1; j++)
            cout << " ";
        for (k = 1; k <= i; k++)
            cout << "* ";
        cout << endl;
    }

    for (i = 1; i <= row1; i++)
    {
        for (j = 1; j <= i; j++)
            cout << " ";
        for (k = i; k <= row1; k++)
            cout << "* ";
        cout << endl;
    }
}
