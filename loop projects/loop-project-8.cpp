// Lesson: loop project 8 example.
#include <iostream>
using namespace std;

int main() {
  int a, c;
  cout << "Enter a integer - ";
  cin >> a;
  c = 0;
  while (a != 0) {
    a /= 10;
    ++c;
  }

  cout << "There are - " << c << "digits";
}