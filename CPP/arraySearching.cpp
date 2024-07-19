#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, k;
    cin >> n;
    int ar[n];
    for (i = 0; i < n; i++)
        cin >> ar[i];
    
    cout<<"which element to search";
    cin>>k;
    for (i = 0; i < n; i++)
    {
        if(k==ar[i]){
        cout<<i;
        break;
        }
        else
        continue;
    }
}
