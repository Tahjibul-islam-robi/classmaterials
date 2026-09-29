// Lesson: main pattern 1 example.
#include <iostream>
using namespace std;

int main() {
  int row, col, n;

  cout << "Enter the number of rows - ";
  cin >> n;

  for (row = 1; row <= n; row++) {
    for (col = 1; col <= n; col++) {
      if (col == 1 || row == n || col + row == n + 1) {
        cout << "*";
      } else
        cout << " ";
    }
    cout << endl;
  }
}
