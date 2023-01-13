#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;
        int i,res;
        int no=1,count=0;;
        while(count<n)
        {
            res=3*no+2;
            if(res%4!=0)
            {
                cout << res << " ";
                count++;
            }
        no++;
        }
}
