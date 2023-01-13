#include<iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
  char ch;
  ch = cin.get();
  int digits = 0, spaces = 0, characters = 0;
  while(ch != '$'){
    if(ch >= 'a' && ch <= 'z')
    characters++;
    else if(ch >= '0' && ch <= '9'){
      digits++;
    }
    else if(ch == ' ' || ch == '\t' || ch == '\n') {
      spaces++;
    }
    ch = cin.get();
  }
  cout << characters << " " << digits << " " << spaces;
  }




