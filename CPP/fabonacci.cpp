#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, f1=0, f2=1, fab;
    cin>>n;
    for(i=1;i<=n;i++){
        if(i==1)
         {cout<<f1<<endl; continue;}
        else if(i==2)
         {cout<<f2<<endl; continue;}
        else{
         fab = f1 + f2;
         f1 = f2;
         f2 = fab;
         cout<<fab<<endl;
        }
          
    }
    
}