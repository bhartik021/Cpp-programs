#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int n;
  cin >> n;
  int i = 1;
  while(i <= n) {
	  int j = 1;
	  char ch = 'A' + i - 1;
	  while(j <= i) {
		  cout << ch;
		  ch++;
		  j++;
	  }
	  cout << endl;
	  i++;
  }
}


