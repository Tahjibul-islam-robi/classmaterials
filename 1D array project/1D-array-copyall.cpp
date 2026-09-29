// Lesson: 1D array copyall example.
#include <iostream>
using namespace std;

int main() {
  int n[] = {10, 19, 18, 17, 16, 15, 14, 13, 12}, a[9], i;

  cout << " array 1 - ";
  for (i = 0; i < 9; i++) {
    cout << n[i] << endl;
  }

  for (i = 0; i < 9; i++) {
    n[i] = a[i];
  }

  cout << "Array 2 - ";
  for (i = 0; i < 9; i++) {
    cout << a[i] << endl;
  }
}