// Lesson: tt example.

#include <iostream>
using namespace std;

void sum() { cout << "Nothing added" << endl; }

void sum(int x, int y) { cout << x + y << endl; }

void sum(int x, int y, int z) { cout << x + y + z << endl; }

int main() {
  sum();
  sum(10, 20);
  sum(30, 40, 50);
}