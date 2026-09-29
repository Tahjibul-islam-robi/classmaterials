// Lesson: pattern type 5 1 example.
#include <iostream>
using namespace std;

int main() {
  int n, row, col;

  cout << "Enter the row of pattern - ";
  cin >> n; // 3

  for (row = n; row >= 1; row--) {
    for (col = 1; col <= n - row; col++) {
      cout << " ";
    }

    for (col = 1; col <= row; col++) {
      cout << col;
    }
    cout << endl;
  }
}