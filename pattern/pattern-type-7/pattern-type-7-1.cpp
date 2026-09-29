// Lesson: pattern type 7 1 example.
#include <iostream>
using namespace std;

int main() {
  int row, col, n;
  cout << "enter the number of rows - ";
  cin >> n;

  for (row = 1; row <= n; row++) {
    for (col = 1; col <= row; col++) {

      cout << row * col << " ";
    }
    cout << endl;
  }
}
