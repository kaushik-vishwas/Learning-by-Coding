#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, num, num2, lastDigit, reverseString = 0;
    cout << "enter number" << endl;
    cin >> num;
    num2 = num;
    while (num > 0)
    {
        lastDigit = num % 10;
        reverseString = (reverseString * 10) + lastDigit;
        num = num / 10;
    }
    cout << reverseString << endl;
    if (num2 == reverseString)
    {
        cout << "yes, it is a palindrome";
    }
    else
        cout << "No, it is not palindrome";
}
