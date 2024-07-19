#include <iostream>
using namespace std;
int main()
{
   string S;
   int Q, i, j, N, count;
   char a, b;
   cin >> S >> Q;
    N = S.size();
   
    while (Q--)
   {
      count = 0;
      cin >> a >> b;
      for (i = 0; i < N; i++)
      {
         if (S[i] == a)
         {
            for (j = i+1; j < N; j++)
            {
               if (S[j] == b)
                  count++;
            }
         }
      }

      cout << count << endl;
   }
}