// Lesson: class29 1 example.
// conditional operator

#include <iostream>

using namespace std;

int main() {

  int num1, num2;
  cout << "Enter two int  : ";
  cin >> num1 >> num2;

  int large = (num1 > num2) ? num1 : num2;
  cout << large;
}