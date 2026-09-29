// Lesson: class44 1 example.
#include <iostream>
using namespace std;

int main() {
  int n[5][4];

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 4; j++) {
      cout << "N[" << i << "][" << j << "]-";
      cin >> n[i][j];
    }
    cout << endl;
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 4; j++) {
      cout << n[i][j];
    }
    cout << endl;
  }
}