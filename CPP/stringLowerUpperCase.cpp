#include <bits/stdc++.h>
using namespace std;
main()
{
    string S;
    cin >> S;
    // Lower Case to Upper Case
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] >= 'a' && S[i] <= 'z')
            S[i] = S[i] - 32;
    }
    // Upper Case to Lower Case
    //  for(int i=0;i<S.size();i++)
    //  {
    //    if(S[i]>='a'&& S[i]<='z')
    //    S[i]=S[i]+32;
    //  }
    cout << S;
}
// inbuilt fuction-
// L to U
transform(S.begin(), S.end(), S.begin ::toupper());
// U to L
transform(S.begin(), S.end(), S.begin ::tolower());