#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, num, lastDigit, digitSum = 0, count = 0;
    cout << "enter number" << endl;
    cin >> num;
    while (num > 0)
    {
        lastDigit = num % 10;
        digitSum = digitSum + lastDigit;
        num = num / 10;
        count++;
    }
    cout << digitSum << endl
         << count;
}
