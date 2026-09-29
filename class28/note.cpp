// Lesson: note example.
#include <iostream>
using namespace std;

int main() {

  double mark;
  cout << "Enter you mark - ";
  cin >> mark;

  if (mark > 100) {
    cout << "invalid number";
  } else if (mark < 0) {
    cout << "invalid number";
  }

  else if (mark >= 80) {
    cout << "A+";
  } else if (mark >= 70) {
    cout << "A";
  } else if (mark >= 60) {
    cout << "A-";
  }

  else if (mark >= 50) {
    cout << "B";
  } else if (mark >= 40) {
    cout << "c";
  } else if (mark >= 33) {
    cout << "D";
  } else {
    cout << "fail";
  }
}