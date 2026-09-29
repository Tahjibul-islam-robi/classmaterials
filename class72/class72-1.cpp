// Lesson: class72 1 example.
#include <iostream>
using namespace std;

class student {
public:
  const int addmissionfee, examFee;

  student(int x, int y) : addmissionfee(x), examFee(y) {
    x = addmissionfee;
    y = examFee;
    cout << addmissionfee << endl << examFee;
  }
};

int main() { student ob1(15000, 500); }