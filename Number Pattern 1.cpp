#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

       int rows, i, j, k = 0;

       cin >> rows;

       for (i = 1; i <= rows; i++)

       {

         for (j = 1; j <= i; ++j)

           cout << k + j;

         ++k;

		 cout << endl;
       }
}
