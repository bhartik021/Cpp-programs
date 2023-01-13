#include <bits/stdc++.h>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
  int n;
  cin >> n;
        for(int i=2 ;i<=n;i++)
        {
            int count=0;
            for(int j=2;j<=i;j++)
            {
                if(i%j==0)
                count++;
            }
            if(count==1)
               cout << i << endl;
        }
}


