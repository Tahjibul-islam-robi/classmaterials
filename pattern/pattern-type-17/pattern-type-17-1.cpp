// Lesson: pattern type 17 1 example.
#include <iostream>
using namespace std;

int main() {
  int row, col, count, n;
  cout << "ENter the number of rows - ";
  cin >> n;

  count = 0;
  for (row = 1; row <= n; row++) {
    for (col = 1; col <= row; col++) {
      cout << " " << ++count;
    }
    cout << "\n";
  }
}