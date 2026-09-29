// Lesson: read and display a two-dimensional array using vectors.
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int rows, columns;
  cout << "Enter the number of rows and columns: ";
  if (!(cin >> rows >> columns) || rows <= 0 || columns <= 0) {
    cerr << "Rows and columns must be positive integers.\n";
    return 1;
  }

  vector<vector<int>> values(rows, vector<int>(columns));
  for (int row = 0; row < rows; ++row) {
    for (int column = 0; column < columns; ++column) {
      cout << "a[" << row << "][" << column << "]: ";
      cin >> values[row][column];
    }
  }

  for (const auto &row : values) {
    for (int value : row)
      cout << value << ' ';
    cout << '\n';
  }
}
