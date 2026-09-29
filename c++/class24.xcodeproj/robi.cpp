// Lesson: print a multiplication table with a for loop.
#include <iostream>
using namespace std;

int main() {
  int number;
  int tableLimit;

  cout << "Enter the number: ";
  if (!(cin >> number)) {
    cerr << "Please enter a valid integer.\n";
    return 1;
  }

  cout << "How many rows do you need? ";
  if (!(cin >> tableLimit) || tableLimit < 0) {
    cerr << "Please enter a non-negative row count.\n";
    return 1;
  }

  for (int i = 1; i <= tableLimit; ++i) {
    cout << number << " x " << i << " = " << number * i << '\n';
  }
}
