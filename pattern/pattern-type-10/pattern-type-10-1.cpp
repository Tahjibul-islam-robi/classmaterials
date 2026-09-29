// Lesson: pattern type 10 1 example.
#include <iostream>
using namespace std;

int main() {
  int n, row, col, line, t;

  cout << "enter the the number of rows  - ";
  cin >> t;
  cout << "Enter the star line of the arroy - ";
  cin >> line;

  n = t / 2 + 1;

  for (row = 1; row <= n - 1; row++) {
    for (col = 1; col <= n - row; col++) {
      cout << " ";
    }
    for (col = 1; col <= line * 2 - 1; col++) {
      cout << "*";
    }
    cout << endl;
  }

  for (row = n; row >= 1; row--) {
    for (col = 1; col <= n - row; col++) {
      cout << " ";
    }
    for (col = 1; col <= line * 2 - 1; col++) {
      cout << "*";
    }
    cout << endl;
  }
}