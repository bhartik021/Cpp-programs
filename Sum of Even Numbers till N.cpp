#include<iostream>
using namespace std;
int main(){
      int n , sum = 0, i = 1;
	  cin >> n;
        while(i<=n)
        {
            if(i%2==0)
            {
                sum=sum+i;
             
            }
                i++;
        }
		cout << sum ;
}
