// Lesson: pattern type 16 1 example.
#include <iostream>
using namespace std;

int main() {
  int row, col, n;

  cout << "Enter the number of rows = ";
  cin >> n;

  for (row = 1; row <= n; row++) {
    for (col = 1; col <= n; col++) {
      if (row == col || col == row || row + col == n + 1)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
}