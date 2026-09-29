// Lesson: class50 1 example.
#include <iostream>
using namespace std;

void addition(int a, int b);
void subtraction(int a, int b);
void multliplication(int a, int b);
void division(int a, int b);

int main() {
  int a, b;
  cout << "Enter first number  -";
  cin >> a;
  cout << "Enter second number  -";
  cin >> b;
  addition(a, b);
  subtraction(a, b);
  multliplication(a, b);
  division(a, b);
}

void addition(int a, int b) {
  int result = a + b;
  cout << "sum is - " << result << endl;
}
void subtraction(int a, int b) {
  int result = a - b;
  cout << "subtraction is - " << result << endl;
}
void multliplication(int a, int b) {
  int result = a * b;
  cout << "multliplication is - " << result << endl;
}
void division(int a, int b) {
  if (b == 0) {
    cout << "Division by zero is undefined\n";
    return;
  }
  double result = static_cast<double>(a) / b;
  cout << "Division is - " << result << endl;
}
