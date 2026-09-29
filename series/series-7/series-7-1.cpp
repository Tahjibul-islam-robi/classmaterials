// Lesson: series 7 1 example.
// 1^2 + 2^2 +....+ n^2

#include <iostream>
using namespace std;

int main() {

  int n, i, sum = 0;

  cout << "Enter the last number serise = ";
  cin >> n;

  for (i = 1; i <= n; i++) {
    sum += i * i;
  }

  cout << "1^2 + 2^2 +....+ " << n << "^2 = " << sum;
}