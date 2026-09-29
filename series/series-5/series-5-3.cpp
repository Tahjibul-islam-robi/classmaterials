// Lesson: series 5 3 example.
// 1+2+3+4+5+........n

#include <iostream>
using namespace std;

int main() {
  int n, i, sum = 0;

  cout << "Enter a number - ";
  cin >> n;

  for (i = 1; i <= n; i = i + 1) {
    sum += i;
  }
  cout << "sum of the  numbers is - " << sum;
}