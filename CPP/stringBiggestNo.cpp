#include <bits/stdc++.h>
using namespace std;
main(){
    string S;
    cin>>S;
    sort(S.begin(), S.end(), greater<int>());
    cout<<S;
}