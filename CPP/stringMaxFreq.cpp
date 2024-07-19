#include <bits/stdc++.h>
using namespace std;
main(){
    string S;
    int freq[26], i;
    cin>>S;
    for(i=0;i<26;i++)
    freq[i]=0;

    for(i=0; i<S.size(); i++){
        freq[S[i]-'a']++;
    }

    int maxF=0;
    char ans='a';
    for(i=0;i<26;i++){
        if(freq[i]>maxF){
        maxF=freq[i];
        ans=i+'a';
        }
    }
    cout<<"The Chacarter is"<<ans<<"and the frequency is"<<maxF;

}