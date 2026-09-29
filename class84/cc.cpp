// Lesson: cc example.
#include <iostream>
using namespace std;

class shape {
public:
  double dim1;
  double dim2;

  shape(double dim1, double dim2) {
    this->dim1 = dim1;
    this->dim2 = dim2;
  }

  double area() { return 0; }
};

class triangel : public shape {
  // dim1,dim2,area
public:
  triangel(double dim1, double dim2) : shape(dim1, dim2) {
    // this -> dim1=dim1;
    // this -> dim2=dim2;
  }

  double area() { return 0.5 * dim1 * dim2; }
};

class rectangel : public shape {
  // dim1,dim2,area
public:
  rectangel(double dim1, double dim2) : shape(dim1, dim2) {
    // this -> dim1=dim1;
    // this -> dim2=dim2;
  }

  double area() { return dim1 * dim2; }
};

int main() {
  shape *p;
  triangel t(10, 20);
  rectangel r(10, 20);
  p = &t;
  cout << "triangel's area is - " << p->area() << endl;
  p = &r;
  cout << "rectangel's area is - " << p->area() << endl;
}