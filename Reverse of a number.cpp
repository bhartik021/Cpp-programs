#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;
	int reverse = 0; 
        while(n > 0) 
        { 
            reverse = reverse * 10 + n% 10; 
            n = n/ 10; 
        } 
        cout <<  reverse;
}
