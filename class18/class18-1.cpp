// Lesson: class18 1 example.
#include <iostream>

using namespace std;

int main() {

  int num;

  cout << "Enter any integer :";
  cin >> num;

  if (num > 0) {
    cout << "+";
  }

  if (num < 0) {
    cout << "-";
  }

  if (num == 0) {
    cout << "Zero";
  }
}