// Lesson: class36 1 example.
#include <iostream>

using namespace std;

int main() {

  for (int i = 1; i <= 100; i++) {

    if (i == 10) {
      break;
    }
    cout << i << endl;
  }
  cout << "finis";
}