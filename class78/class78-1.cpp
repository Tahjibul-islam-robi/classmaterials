// Lesson: class78 1 example.
#include <iostream>
using namespace std;

class student {
public:
  string name;

  student(string name) { this->name = name; }

  void display() { cout << name << endl; }
};

int main() {
  student stu("robi");
  stu.display();
}