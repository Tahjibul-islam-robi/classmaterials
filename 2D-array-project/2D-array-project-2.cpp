// Lesson: 2D array project 2 example.
#include <iostream>
using namespace std;

int main() {

  int i, j, r, c;

  cout << "Enter the number of rows - ";
  cin >> r;
  cout << "Enter the number of colums - ";
  cin >> c;
  int a[10][10], b[10][10], d[10][10];

  // input
  // input array 1
  cout << "input for frist matrix - " << endl;
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      cout << "a[" << i << "][" << j << "]-";
      cin >> a[i][j];
    }
    cout << endl;
  }
  // input array 2
  cout << "input for second matrix - " << endl;
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      cout << "b[" << i << "][" << j << "]-";
      cin >> b[i][j];
    }
    cout << endl;
  }

  //
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      d[i][j] = a[i][j] + b[i][j];
    }
  }

  // output
  // output array1
  cout << "array 1=" << endl;
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  // output array2
  cout << "array 2=" << endl;
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      cout << b[i][j] << " ";
    }
    cout << endl;
  }

  // output array3
  cout << "array 3=" << endl;
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      cout << d[i][j] << " ";
    }
    cout << endl;
  }
}
