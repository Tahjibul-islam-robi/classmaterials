// Lesson: series 10 3 example.
// 1^3x3^3x5^3x.......xN^3

#include <iostream>
using namespace std;

int main() {

  int n, sum = 1;

  cout << "Enter the last number of serise  -  ";
  cin >> n;

  for (int i = 1; i <= n; i += 2) {
    sum = sum * i * i * i;
  }

  cout << "1^3x3^3x5^3x.......xN^3=" << sum;
}