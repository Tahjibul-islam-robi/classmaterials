// Lesson: class75 1 example.
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char name1[] = "Robi";
  char name2[10];

  int x = strlen(name1);
  cout << "length- " << x << endl;

  strcpy(name2, name1);
  cout << name2 << "\n";
}