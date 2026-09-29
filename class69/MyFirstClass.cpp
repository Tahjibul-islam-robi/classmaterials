// Lesson: MyFirstClass example.

#include "MyFirstClass.hpp"
#include <iomanip>
#include <iostream>
using namespace std;

long long int id;
double gpa;

MyFirstClass ::MyFirstClass(int x, double y) {
  id = x;
  gpa = y;
}

void MyFirstClass ::display() {
  cout << showpoint;
  cout << setprecision(3);
  cout << id << " " << gpa << endl;
}

MyFirstClass ::~MyFirstClass() { cout << "Programm is Finished;;; " << endl; }
