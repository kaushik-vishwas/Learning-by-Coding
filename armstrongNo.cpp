#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, num, num2, lastDigit, armstrongNo = 0;
    cout << "enter number" << endl;
    cin >> num;
    num2 = num;
    while (num > 0)
    {
        lastDigit = num % 10;
        armstrongNo = lastDigit * lastDigit * lastDigit + armstrongNo;
        num = num / 10;
    }
    if (num2 == armstrongNo)
    {
        cout << "yes, it is a armstrongNo";
    }
    else
        cout << "No, it is not armstrongNo";
}
