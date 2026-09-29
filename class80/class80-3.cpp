// Lesson: class80 3 example.
#include <iostream>
using namespace std;

class animal {
public:
  void t() { cout << "I am a animal"; }
};

class cat : public animal {
public:
  void beh() { cout << "I am  a cat maw maw"; }
};

class dog : public animal {
public:
  void beh() { cout << "I am  a dog sho sho"; }
};

int main() {
  dog d1;
  d1.t();
  d1.beh();
}