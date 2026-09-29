// Lesson: pattern type 3 1 example.
#include <iostream>
using namespace std;

int main() {
  int col, row, n;

  cout << "Enter the number of rows - ";
  cin >> n;

  for (row = 1; row <= n - 1; row++) {

    for (col = 1; col <= row; col++) {
      cout << " " << col;
    }
    cout << endl;
  }
  for (row = n; row >= 1; row--) {
    for (col = 1; col <= row; col++) {
      cout << " " << col;
    }
    cout << endl;
  }
}