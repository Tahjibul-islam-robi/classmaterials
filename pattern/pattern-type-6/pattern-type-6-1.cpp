// Lesson: pattern type 6 1 example.

#include <iostream>
using namespace std;

int main() {
  int row, n, col;

  cout << "Enter the number of rows - ";
  cin >> n;

  for (row = 1; row <= n; row++) {
    for (col = 1; col <= n; col++) {
      cout << "* ";
    }
    cout << endl;
  }
}
