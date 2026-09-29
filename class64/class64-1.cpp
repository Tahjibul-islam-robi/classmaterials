// Lesson: class64 1 example.
#include <iostream>
using namespace std;

class student {
public:
  int id;
  double gpa;

  void display() { cout << id << " " << gpa << endl; }
};

int main() {

  student robi, rafan, shihab;

  robi.id = 101;
  robi.gpa = 5.00;
  robi.display();

  rafan.id = 102;
  rafan.gpa = 5.00;
  rafan.display();

  shihab.id = 103;
  shihab.gpa = 5.00;
  shihab.display();
}