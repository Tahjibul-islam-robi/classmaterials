// Lesson: main example.
#include "MyFirstClass.hpp"
#include <iostream>
using namespace std;

int main() {
  MyFirstClass Robi(23101059, 5.00), shihab(23101060, 5.00);

  MyFirstClass *p = &Robi;
  p->display();

  MyFirstClass *p1 = &shihab;
  p1->display();
}
