// Lesson: class80 2 example.
// multlilevel

#include <iostream>
using namespace std;

class A {
public:
  int age;
  void display1() { cout << "Age = " << age << endl; }
};

class B : public A {
public:
  string name;
  void display2() {
    cout << "Name  = " << name << endl;
    display1();
  }
};

class C : public B {
public:
  int id;
  void display3() {
    cout << "id  = " << id << endl;
    display2();
  }
};

int main() {
  C s1;

  s1.age = 12;
  s1.name = "Robi";
  s1.id = 101;
  s1.display3();
}