#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
 int n;
 cin >> n;
 int i =1 ;
 int p = i;
 while(i <= n){
     int spaces = 1;
     while(spaces <= n-i) {
         cout << " ";
         spaces++;
     }
     spaces = 1;
     int p = i;
     while(spaces <= i) {
         cout << p;
         p++;
         spaces++;
     }
     p = p - 2;
     int k = 1;
     while(k <= i - 1) {
         cout << p;
         p--;
         k++;
     }
     cout << endl;
     i++;
 }   
}
