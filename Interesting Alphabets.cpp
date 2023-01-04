#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin >> n;
    int i = 1;
    int num = n;
    while(i <= n) {
        int j = 1;
        char ch = 'A' + num - 1;
        while(j <= i) {
            cout << ch;
            j++;
            ch++;
        }
        cout << endl;
        num--;
        i++;
    }
}
