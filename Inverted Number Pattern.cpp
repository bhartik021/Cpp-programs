#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int n;
  cin >> n;
  int i = 1;
  int k = n;
  while(i <= n) {
	  int j = n - i + 1;
	  int num = j;
	  while(j > 0) {
		  cout << num;
		  j--;
	  }
	  cout << endl;
	  i++;
  }
}


