#include<bits/stdc++.h>
using namespace std;

int main() {
  // Write your code here
  int basic;
  char grade;
  cin >> basic >> grade;

  double hra = 0.2 * basic;
  double da = 0.50 * basic;
  double pf = 0.11 * basic;

  int allow;
  if (grade == 'A') {
    allow = 1700;
  } else if (grade == 'B') {
    allow = 1500;
  } else {
    allow = 1300;
  }
  double totalSalary = basic + hra + da + allow - pf;
  double p = round(totalSalary);
  int h = (int)(p);
  cout << h ;
}
