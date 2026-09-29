// Lesson: pattern type 11 1 example.
#include <iostream>
using namespace std;

int main() {
  int n, row, col;

  cout << "enter the the number of rows  - ";
  cin >> n;

  for (row = 1; row <= n; row++) {
    for (col = 1; col <= n - row; col++) {
      cout << " ";
    }
    for (col = 1; col <= row; col++) {
      cout << "* ";
    }
    cout << endl;
  }
}