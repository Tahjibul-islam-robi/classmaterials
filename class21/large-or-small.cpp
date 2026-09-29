// Lesson: large or small example.
#include <iostream>

using namespace std;

int main() {

  int num, num2;
  cout << "enter two number - ";
  cin >> num >> num2;

  if (num > num2) {
    cout << "number 1 is big = " << num;
  } else if (num < num2) {
    cout << "number tow is big - " << num2;
  }
}