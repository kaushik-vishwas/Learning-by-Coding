#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, i;
    string str, strRev;
    cin >> str;
    l = str.size();
    for (i = l - 1; i >= 0; i--)
    {
        strRev = strRev + str[i];
    }
    if (str == strRev)
        cout << "Yes, It is a palendrom";
    else
        cout << "No, It is Not a palendrom";
}