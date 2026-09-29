// Lesson: class56 1 example.
#include <iostream>
using namespace std;

void sum(int a, int b);
void sum(int a, int b, int c);
void sum(int a, double b);

int main() {
  sum(20, 30);
  sum(1, 2, 3);
  sum(2, 5.9);
}

void sum(int a, int b) {
  int add = a + b;
  cout << add << endl;
}

void sum(int a, int b, int c) {
  int add = a + b + c;
  cout << add << endl;
}

void sum(int a, double b) {
  double result = a + b;
  cout << result << endl;
}
