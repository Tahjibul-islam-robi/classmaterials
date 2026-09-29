// Lesson: class66 1 example.
#include <iostream>
using namespace std;

class student {
public:
  int id;
  float gpa;

  void display() { cout << id << " " << gpa << endl; }
  student(int x, float y) {
    id = x;
    gpa = y;
  }
};

int main() {

  student robi(101, 5.00), rafan(102, 5), shihab(103, 5), omi(104, 4.99);

  robi.display();

  rafan.display();

  shihab.display();
  omi.display();
}