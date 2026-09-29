// Lesson: loop project 4 example.
#include <iostream>
using namespace std;

int main() {

  int rem, gcd, lcm, num1, num2, n1, n2;

  cout << "Enter a number - ";
  cin >> num1;

  cout << "ENter or number - ";
  cin >> num2;

  n1 = num1;
  n2 = num2;

  while (n1 != 0) {
    rem = n1 % n2;
    n1 = n2;
    n2 = rem;
  }

  gcd = n2;
  lcm = (num1 * num2) / gcd;

  cout << "The go sha gos is - " << gcd << endl;
  cout << "The lo sha go  is - " << lcm;
}