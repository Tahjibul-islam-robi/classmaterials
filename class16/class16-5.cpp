// Lesson: class16 5 example.
// sizeof
// chaqr stiring  = 4 byte

#include <iostream>
using namespace std;

int main() {

  char name[14]; // we can change the char string byte

  int m = sizeof(name);
  cout << m;
}