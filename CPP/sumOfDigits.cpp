#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long sum = 0, n, n2;
    cin >> n;
    while (n != 0)
    {
        n2 = n % 10;
        sum = sum + n2;
        n = n / 10;
    }
    cout << sum;
}