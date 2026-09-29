// Lesson: class36 2 example.
#include <iostream>

using namespace std;

int main() {

  for (int i = 1; i <= 100; i++) {

    switch (i) {
    case 21:
    case 11:
    case 99:
    case 20:
    case 30:
      continue;
      break;
    }
    cout << i << endl;
  }
}
