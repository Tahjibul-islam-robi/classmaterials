// Lesson: pattern type 2 3 example.
#include <iostream>
using namespace std;

int main() {
  int row, col, n;

  cout << "Enter the number of rows - ";
  cin >> n;

  for (row = n; row >= 1; row--) {
    for (col = 1; col <= row; col++) {
      cout << " " << col / 2;
    }
    cout << endl;
  }
}