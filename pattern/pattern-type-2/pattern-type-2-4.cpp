// Lesson: pattern type 2 4 example.
#include <iostream>
using namespace std;

int main() {
  int row, col, n;

  cout << "Enter the number of rows - ";
  cin >> n;

  for (row = n; row >= 1; row--) {
    for (col = 1; col <= row; col++) {
      cout << " " << row / 2;
    }
    cout << endl;
  }
}