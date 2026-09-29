// Lesson: pattern type 9 1 example.
#include <iostream>
using namespace std;

int main() {
  int n, row, col;

  cout << "enter the the number of rows  - ";
  cin >> n;

  for (row = 1; row <= n - 1; row++) {
    for (col = 1; col <= n - row; col++) {
      cout << " ";
    }
    for (col = 1; col <= row * 2 - 1; col++) {
      cout << "*";
    }
    cout << endl;
  }

  for (row = n; row >= 1; row--) {
    for (col = 1; col <= n - row; col++) {
      cout << " ";
    }
    for (col = 1; col <= row * 2 - 1; col++) {
      cout << "*";
    }
    cout << endl;
  }
}