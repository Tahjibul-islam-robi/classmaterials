// Lesson: class53 1 example.
#include <iostream>
using namespace std;

void square(int n) {
  int result = n * n;
  cout << "square of " << n << " is=" << result << endl;
}

int main() {
  square(5);
  square(6);
  square(7);
}