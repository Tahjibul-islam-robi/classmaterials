// Lesson: class63 1 example.
#include <iostream>
using namespace std;

class student {
public:
  int id;
  double gpa;
};

int main() {

  student robi, rafan, shihab;

  robi.id = 101;
  robi.gpa = 5.00;
  cout << robi.id << " " << robi.gpa << endl;

  rafan.id = 102;
  rafan.gpa = 5.00;
  cout << rafan.id << " " << rafan.gpa << endl;

  shihab.id = 103;
  shihab.gpa = 5.00;
  cout << shihab.id << " " << shihab.gpa << endl;
}