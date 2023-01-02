#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
	int n, x;
	cin >> n >> x;
	int p = 1;
	for(int i = 1; i <= x; i++) {
		p = p * n;
	}
	cout << p;
}
