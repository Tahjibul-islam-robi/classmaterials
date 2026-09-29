// Lesson: class75 3 example.
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  const char robi[] = "Robi";
  const char expected[] = "Robi";

  if (strcmp(robi, expected) == 0) {
    cout << "The strings are equal\n";
  } else {
    cout << "The strings are different\n";
  }

  cout << robi << '\n';
}
