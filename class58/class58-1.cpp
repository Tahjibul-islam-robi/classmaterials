// Lesson: class58 1 example.
#include <iostream>
using namespace std;

int fact(int i);

int main() {

  int factu = fact(4);
  cout << factu;
}

int fact(int i) {
  if (i < 0) {
    return 0; // This example defines factorial only for non-negative integers.
  }
  if (i <= 1) {
    return 1;
  }
  return i * fact(i - 1);
}
