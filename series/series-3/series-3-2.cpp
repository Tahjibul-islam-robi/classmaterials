// Lesson: series 3 2 example.
#include <iostream>
using namespace std;

int main() {
  while (true) {
    int n1, n2, sum = 0, a = 1, b = 2;

    cout << "ENter number 1 - ";
    cin >> n1;
    cout << "Enter number 2 - ";
    cin >> n2;

    while (a <= n1 && b <= n2) {
      sum = sum + (a * b);
      a++;
      b += 2;
    }

    cout << "(1*2) + (2*4) + (3*6)+ ......... +  " << "(" << n1 << " * " << n2
         << ")" << " = ";
    cout << sum << endl << endl;
  }
}