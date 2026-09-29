// Lesson: class43 1 example.
#include <iostream>
using namespace std;

int main() {
  int n[2][5] = {{13, 13, 13, 13, 13}, {13, 13, 13, 13, 13}};

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 5; j++) {
      cout << n[i][j] << " ";
    }
    cout << endl;
  }
}