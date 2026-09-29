// Lesson: class85 1 example.
#include <iostream>
using namespace std;

class mobileUser {
public:
  void call() { cout << "Hello call"; }
  virtual void sendMassege() = 0;
};

class Rahim : public mobileUser {
public:
  void sendMassege() { cout << "Hi!I am Rahim" << endl; }
};

class karim : public mobileUser {
public:
  void sendMassege() { cout << "Hi!I am karim" << endl; }
};

int main() {
  mobileUser *m;
  Rahim ob;
  karim ok;
  ob.call();
  m = &ob;
  m->sendMassege();
  m = &ok;
  m->sendMassege();
}