// Lesson: class84 1 example.
#include <iostream>
using namespace std;

class shape {
public:
  double dim1, dim2;

  shape(double dim1, double dim2) {
    this->dim1 = dim1;
    this->dim2 = dim2;
  }

  virtual double area() { return 0; }
};

class trainangel : public shape {
  // dim1,dim2,area
public:
  trainangel(double dim1, double dim2) : shape(dim1, dim2) {}
  double area() { return 0.5 * dim1 * dim2; }
};
class rectangel : public shape {
  // dim1,dim2,area
public:
  rectangel(double dim1, double dim2) : shape(dim1, dim2) {}
  double area() { return dim1 * dim2; }
};

int main() {
  shape *p;
  trainangel t(10, 20);
  rectangel r(10, 20);
  p = &t;
  cout << "trainangel area is-" << p->area() << endl;
  p = &r;
  cout << "area of rectngel is-" << p->area() << endl;
}