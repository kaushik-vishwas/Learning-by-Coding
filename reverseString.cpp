#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, num, lastDigit, reverseString = 0;
    cout << "enter number" << endl;
    cin >> num;
    while (num > 0)
    {
        lastDigit = num % 10;
        reverseString = (reverseString * 10) + lastDigit;
        num = num / 10;
    }
    cout << reverseString << endl;
}
