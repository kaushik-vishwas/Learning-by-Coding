#include <bits/stdc++.h>
using namespace std;
int main()
{
   int i, n;
   cin>>n;
   int ar[n];
   for(i=0;i<n;i++)
   cin>>ar[i];
   
   for (i = 0; i < n; i++){
    if(ar[0]<ar[i]){
        ar[0]=ar[i];
    }
   }
   cout<<ar[0];
}
// #include <bits/stdc++.h>
// using namespace std;
// For Min_______
// int main()
// {
//    int i, n;
//    cin >> n;
//    int ar[n];
//    for (i = 0; i < n; i++)
//     cin >> ar[i];

//    for (i = 0; i < n; i++)
//    {
//     if (ar[0] > ar[i])
//     {
//         ar[0] = ar[i];
//     }
//    }
//    cout << ar[0];
// }