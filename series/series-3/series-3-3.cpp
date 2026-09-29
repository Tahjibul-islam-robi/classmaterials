// Lesson: series 3 3 example.
#include <iostream>
using namespace std;

int main() {
  while (true) {
    int n1, n2, n3, sum = 0, a = 1, b = 2, c = 3;

    cout << "ENter number 1 - ";
    cin >> n1;
    cout << "Enter number 2 - ";
    cin >> n2;
    cout << "Enter number 3 - ";
    cin >> n3;

    while (a <= n1 && b <= n2 && c <= n3) {
      sum = sum + (a * b * c);
      a++;
      b++;
      c++;
    }

    cout << "(1*2*3) + (2*3*4) + (3*4*5)+ ......... +  " << "(" << n1 << " * "
         << n2 << " * " << n3 << ")" << " = " << sum << endl
         << endl;
  }
}