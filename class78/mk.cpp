// Lesson: demonstrate the this pointer when assigning a parameter to a member.
#include <iostream>
#include <string>
using namespace std;

class student {
public:
  string name;
  int id = 0;

  void setName(const string &name) {
    this->name = name; // this points to the current object.
  }
};

int main() {
  student learner;
  learner.setName("Robi");
  cout << learner.name << endl;
}
