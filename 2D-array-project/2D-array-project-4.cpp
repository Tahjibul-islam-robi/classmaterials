// Lesson: 2D array project 4 example.
#include <iostream>
using namespace std;

int main() {
  int a[10][10], trans[10][10], i, j, r, c;
  if (!(cin >> r >> c) || r <= 0 || c <= 0 || r > 10 || c > 10) {
    cerr << "Rows and columns must be between 1 and 10.\n";
    return 1;
  }

  cout << "Enter the number of rows and columns (1-10): ";

  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      cout << "a[" << i << "][" << j << "]-";
      cin >> a[i][j];
    }
    cout << endl;
  }

  for (i = 0; i < c; i++) {
    for (j = 0; j < r; j++) {
      trans[i][j] = a[j][i];
    }
  }

  cout << "1st-" << endl;
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  cout << "transpose-" << endl;
  for (i = 0; i < c; i++) {
    for (j = 0; j < r; j++) {
      cout << trans[i][j] << " ";
    }
    cout << endl;
  }
}