// Lesson: pattern type 14 1 example.
#include <iostream>
using namespace std;

int main() {

  int row, col, n;

  cout << "Enter the number of rows - ";
  cin >> n;

  for (row = 1; row <= n; row++) {
    for (col = 1; col <= row; col++) {
      if (col == 1 || row == n || col == row || row == col) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}
