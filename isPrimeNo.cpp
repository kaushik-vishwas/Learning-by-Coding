#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, num, c = 0;
    cout << "enter number" << endl;
    cin >> num;
    for (i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            c++;
            if ((num / i) != i)
                c++;
        }
    }
    if (c == 2)
        cout << "prime";
    else
        cout << "not prime";
}
