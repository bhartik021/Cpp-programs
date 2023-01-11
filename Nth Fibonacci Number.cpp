#include<bits/stdc++.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int N;
        cin >> N;
        int i;
        int new_term = 0;
        int t1 = 1;
        int t2 = 1;

        if (N == 1) {
          new_term = 1;
        } else if (N == 2) {
          new_term = 1;
        } else {
          for (i = 3; i <= N; i++) {
            new_term = t1 + t2;
            t1 = t2;
            t2 = new_term;
          }
        }

        cout << new_term;
}
