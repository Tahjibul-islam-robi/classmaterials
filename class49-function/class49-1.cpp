// Lesson: class49 1 example.
#include <iostream>
using namespace std;

void addition(int a, int b) {
  int sum = a + b;
  cout << sum;
}

int main() {

  int a, b;
  cout << "Enter first number  -";
  cin >> a;
  cout << "Enter second number  -";
  cin >> b;
  addition(a, b);
}