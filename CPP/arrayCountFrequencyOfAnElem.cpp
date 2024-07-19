#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, i, e, count=0;
   cin>>n;
   int ar[n];
   for(i=0;i<n;i++){
    cin>>ar[i];
   }
   cout<<"of which element you want to know frequencey?"<<endl;
   cin>>e;
   for (i = 0; i < n; i++)
   {
    if(e==ar[i])
     count++;
     else
     continue;
   }
   cout<<count;
}
