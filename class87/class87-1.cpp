// Lesson: class87 1 example.
#include <iostream>
using namespace std;

template <class myTemplate> myTemplate add(myTemplate a, myTemplate b) {
  return a + b;
}

int main() { cout << add(1.5, 9.0); }