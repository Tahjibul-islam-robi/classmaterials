// Lesson: 2D array project 3 example.
#include <iostream>
using namespace std;

int main() {
  int frist[10][10], second[10][10], result[10][10], sum;
  int i, j, k, r1, c1, r2, c2;

  cout << "Enter the number of rows for frist matrix-";
  cin >> r1;
  cout << "enter the number of colums for frist matrix-";
  cin >> c1;
  cout << "Enter the number of rows for second matrix-";
  cin >> r2;
  cout << "enter the number of colums for second matrix-";
  cin >> c2;

  while (c1 != r2) {
    cout << "Error,pls enter equle c1 = r2 !!" << endl;
    cout << "Enter the number of rows for frist matrix-";
    cin >> r1;
    cout << "enter the number of colums for frist matrix-";
    cin >> c1;
    cout << "Enter the number of rows for second matrix-";
    cin >> r2;
    cout << "enter the number of colums for second matrix-";
    cin >> c2;
  }

  cout << "--------Input--------" << endl << endl;

  cout << "Input for friest matrix - " << endl;
  for (i = 0; i < r1; i++) {
    for (j = 0; j < c1; j++) {
      cout << "a[" << i << "][" << j << "]-";
      cin >> frist[i][j];
    }
    cout << endl;
  }

  cout << "Input for second matrix - " << endl;
  for (i = 0; i < r2; i++) {
    for (j = 0; j < c2; j++) {
      cout << "a[" << i << "][" << j << "]-";
      cin >> second[i][j];
    }
    cout << endl;
  }

  for (i = 0; i < r1; i++) {
    for (j = 0; j < c2; j++) {
      for (k = 0; k < c1; k++) {
        sum = 0;
        sum = sum + frist[i][k] + second[j][k];
      }
      result[i][j] = sum;
      sum = 0;
    }
  }

  ////

  cout << "------output-------";
  cout << "output for friest matrix - " << endl;
  for (i = 0; i < r1; i++) {
    for (j = 0; j < c1; j++) {
      cout << frist[i][j] << " ";
    }
    cout << endl;
  }

  cout << "output for second matrix - " << endl;
  for (i = 0; i < r2; i++) {
    for (j = 0; j < c2; j++) {
      cout << second[i][j] << " ";
    }
    cout << endl;
  }

  cout << "output for multiplicate matrix - " << endl;
  for (i = 0; i < r2; i++) {
    for (j = 0; j < c2; j++) {
      cout << result[i][j] << " ";
    }
    cout << endl;
  }
}