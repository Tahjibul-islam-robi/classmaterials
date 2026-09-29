// Lesson: series 7 2 example.
// 1^2 + 2^2 +....+ n^2

#include <iostream>
using namespace std;

int main() {

  int n, i, sum = 0;

  cout << "Enter the last number serise = ";
  cin >> n;

  i = 1;
  while (i <= n) {
    sum += i * i;
  }

  cout << "1^2 + 2^2 +....+ " << n << "^2 = " << sum;
}