// Lesson: class83 1 example.
#include <iostream>
using namespace std;

class OverloadingDemo {
public:
  void add() { cout << "Nothing added"; }

  void add(int x, int y) { cout << x + y << endl; }

  void add(int x, int y, int z) { cout << x + y + z << endl; }
};

int main() {
  OverloadingDemo s1;
  s1.add();
  s1.add(9, 10);
  s1.add(4, 5, 6);
}