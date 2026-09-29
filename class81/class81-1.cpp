// Lesson: class81 1 example.
#include <iostream>
using namespace std;

class person {
public:
  void display() { cout << "I'm a person " << endl; }
};

class student : public person {
public:
  void display() { cout << "I'm a student " << endl; }
};

class teacher : public person {
public:
  void display() { cout << "I'm a teacher " << endl; }
};

int main() {
  teacher t;
  t.display();

  student s;
  s.display();

  person p;
  p.display();
}