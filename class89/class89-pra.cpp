// Lesson: class89 pra example.
#include <iostream>
using namespace std;

int main() {
  while (true) {
    try {
      int x, y;
      cout << "Enter frist number - ";
      cin >> x;
      cout << "Enter second number - ";
      cin >> y;
      if (y == 0) {
        throw -1;
      }
      double result = (double)x / y;
      cout << "result is - " << result << endl;
    } catch (int x) {
      cout << "Divide by 0 is not posival \n pls,try again" << endl;
    }
  }
}