// Lesson: series 10 1 example.
// 1^2x2^2x3^2x.......xN^2

#include <iostream>
using namespace std;

int main() {

  int n, sum = 1;

  cout << "Enter the last number of serise  -  ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    sum = sum * i * i;
  }

  cout << "1^2x2^2x3^2x.......xN^2=" << sum;
}