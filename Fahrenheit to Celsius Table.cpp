#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
       int S, E, W;
       cin >> S >> E >> W;
       int C;
       while(S <= E) {
         C = 5.0/9*(S-32);
         cout << S << "\t" << C << endl;
         S = S+W;
       }

}
