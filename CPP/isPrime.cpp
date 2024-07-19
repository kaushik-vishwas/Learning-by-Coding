#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    bool isPrime = true;
    cin >> n;
    for (i = 2; i < n / 2; i++)
    {
        if (n % i != 0)
        {
            continue;
        }
        else
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "yes, It is a Prime Number";
    else
        cout << "No, Its Not a Prime Number";
}