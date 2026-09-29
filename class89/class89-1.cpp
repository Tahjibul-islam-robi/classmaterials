// Lesson: class89 1 example.
#include <iostream>
using namespace std;

int main() {
  try {
    int num1, num2;

    cout << "Enter frist number - ";
    cin >> num1;
    cout << "Enter second number - ";
    cin >> num2;
    if (num2 == 0) {
      throw -1;
    }
    double result = (double)num1 / num2;

    cout << "Result is - " << result;
  } catch (...) {
    cout << "Divide by 0 is not posival,try again";
  }
}