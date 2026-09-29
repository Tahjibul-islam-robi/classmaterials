// Lesson: class83 2 example.
#include <iostream>
using namespace std;

class person {
public:
  virtual void display() { cout << "I am  a person"; }
};

class student : public person {
public:
  void display() { cout << "I am  a student"; }
};

class teacher : public person {
public:
  void display() { cout << "I am  a teacher"; }
};

int main() {
  student s1;
  person *p1;
  teacher t1;

  p1 = &t1;
  p1->display();

  p1 = &s1;
  p1->display();
}