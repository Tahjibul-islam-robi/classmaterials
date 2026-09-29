// Lesson: series 5 2 example.
// 1+3+5++7+9+..........n

#include <iostream>
using namespace std;

int main() {
  int n, i, sum = 0;

  cout << "Enter a number - ";
  cin >> n;

  for (i = 1; i <= n; i = i + 2) {
    sum += i;
  }
  cout << "sum of the ODD number is - " << sum;
}
