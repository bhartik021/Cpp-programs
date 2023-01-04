#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int n;
  cin >> n;
  int i = 1;
  while(i <= n){
	  int num = 1;
	  int space =1;
	  while(space <= n - i) {
		  cout << " ";
		  space++;
	  }
	  while(space <= n) {
		  cout << num;
		  num++;
		  space++;
	  }
	  cout << endl;
	  i++;
  }
}


