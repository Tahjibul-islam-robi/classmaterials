// Lesson: class80 4 example.
#include <iostream>
using namespace std;

class father {
public:
  void facecolor() { cout << "brown screen"; }
};

class mother {
public:
  void facesize() { cout << "long screen"; }
};

class daughter : public father, public mother {};

int main() {
  daughter d1;
  d1.facecolor();
  d1.facesize();
}