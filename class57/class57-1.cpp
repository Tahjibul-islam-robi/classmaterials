// Lesson: class57 1 example.
#include <iostream>
using namespace std;

void disply_array(int num[], int size) {
  for (int i = 0; i < size; i++) {
    cout << num[i] << endl;
  }
}

int main() {
  int num[5] = {10, 20, 30, 40, 50};
  disply_array(num, 5);
}