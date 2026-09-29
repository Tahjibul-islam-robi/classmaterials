// Lesson: class65 1 example.
#include <iostream>
using namespace std;

class student {
public:
  int id;
  double gpa;

  void display() { cout << id << " " << gpa << endl; }
  void setData(int x, double y) {
    id = x;
    gpa = y;
  }
};

int main() {

  student robi, rafan, shihab, omi;

  robi.setData(101, 5.00);
  robi.display();

  rafan.setData(102, 5.00);
  rafan.display();

  shihab.setData(103, 5.00);
  shihab.display();

  omi.setData(104, 3.44);
  omi.display();
}