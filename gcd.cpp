#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cout << "enter two numbers" << endl;
    cin >> a >> b;
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        cout << b;
    else
        cout << a;
}
