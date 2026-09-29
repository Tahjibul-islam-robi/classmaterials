// Lesson: class16 6 example.
// Comma

#include <iostream>
using namespace std;

int main() {

  int a, b, sum;

  sum = (a = 20, b = 30, sum = a + b);
  cout << sum;
}