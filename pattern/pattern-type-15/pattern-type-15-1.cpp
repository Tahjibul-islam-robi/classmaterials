// Lesson: pattern type 15 1 example.
#include <iostream>
using namespace std;

int main() {
  int n, row, col;

  cout << "ENter the number of rows - ";
  cin >> n;

  for (row = 1; row <= n; row++) {
    for (col = 1; col <= row; col++) {
      if (row == n || col == 1 || col == row || row == col) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}