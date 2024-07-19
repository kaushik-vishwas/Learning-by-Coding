#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, num;
    cout << "enter number" << endl;
    cin >> num;
    for (i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
            if ((num / i) != i)
                cout << num / i << endl;
        }
    }
}
