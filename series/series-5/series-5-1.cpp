// Lesson: series 5 1 example.
// 2+4+6+8+10.........+n

#include <iostream>
using namespace std;

int main() {
  int n, i, sum = 0;

  cout << "Enter a number - ";
  cin >> n;

  for (i = 2; i <= n; i = i + 2) {
    sum += i;
  }
  cout << "sum of the EVen number is - " << sum;
}