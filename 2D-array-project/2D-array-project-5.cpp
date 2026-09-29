// Lesson: 2D array project 5 example.
#include <iostream>
using namespace std;

int main() {
  int a[3][3], i, j;

  // input
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      cout << "a[" << i << "][" << j << "]";
      cin >> a[i][j];
    }
    cout << endl;
  }

  // output
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}