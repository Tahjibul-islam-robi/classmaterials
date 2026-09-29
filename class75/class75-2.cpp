// Lesson: class75 2 example.
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char name1[20] = "Tahjibul";
  char name2[] = " Islam";

  strcat(name1, name2);
  cout << name1;
}