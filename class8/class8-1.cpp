// Lesson: class8 1 example.
#include <iostream>
using namespace std;

int main() {

  int num1, num2;

  cout << "enter friest number: ";
  cin >> num1;

  cout << "enter second number: ";
  cin >> num2;

  int sum = num1 + num2;
  cout << "the addition is = " << sum;
  cout << endl;

  int sub = num1 - num2;
  cout << "the subtriction is = " << sub;
  cout << endl;

  int mul = num1 * num2;
  cout << "the multipication is = " << mul;
  cout << endl;

  double div = num2 != 0 ? static_cast<double>(num1) / num2
                         : 0.0; // Convert before division.
  cout << "the divition is = " << div;
  cout << endl;

  int rem = num2 != 0 ? num1 % num2
                      : 0; // Remainder is undefined when divisor is zero.
  cout << "the reminder is = " << rem;
  cout << endl;
}