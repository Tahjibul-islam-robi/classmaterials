// Lesson: class80 1 simple example.
#include <iostream>
using namespace std;

class person {
public:
  int age;
  string name;

  void display() {
    cout << "Name -" << name << endl;
    cout << "age -" << age << endl;
  }
};

class student : public person {
public:
  int id;

  void display1() {
    cout << "id - " << id << endl;
    display();
  }
};

int main() {
  student s1;
  s1.id = 101;
  s1.name = "Robi";
  s1.age = 12;
  s1.display1();
}