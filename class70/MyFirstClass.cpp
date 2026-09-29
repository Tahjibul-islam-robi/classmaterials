// Lesson: MyFirstClass example.
#include "MyFirstClass.hpp"
#include <iostream>

using namespace std;

MyFirstClass ::MyFirstClass() { cout << "Contructor is callled!!!" << endl; }

MyFirstClass ::~MyFirstClass() { cout << "distructor is callled!!!" << endl; }

void MyFirstClass::display() { cout << "Display is called" << endl; }
