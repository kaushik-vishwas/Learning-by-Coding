#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, i, j, k;
    cin >> row;
    for(i=row;i>=1;i--){
        for(j=i;j>=1;j--){
          cout<<" ";
        }
    for(k=row-i+1;k>=1;k--){
      cout<<"* ";
    }
    cout<<endl;
    }
   
}