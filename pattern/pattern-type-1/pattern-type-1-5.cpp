// Lesson: pattern type 1 5 example.
#include <iostream>
using namespace std;

int main() {
  int row, col, n;

  cout << "Enter the last row of pattern - ";
  cin >> n;

  for (row = 1; row <= n; row++) {
    for (col = 1; col <= row; col++) {
      cout << " " << (char)(col + 64);
    }
    cout << endl;
  }
}