#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
     int i, j, k, N;

     cin >> N;
    for(i=1; i<=N; i++)
    {
        k = i;

        // Logic to print spaces
        for(j=i; j<N; j++)
        {
            cout << " ";
        }

        // Logic to print numbers
        for(j=1; j<=i; j++, k++)
        {
            cout << k ;
        }

       cout << endl;
    }

    return 0;
}


