// Lesson: vv example.
#include <iostream>
using namespace std;

int main() {
  int arr[5] = {10, 20, 30, 40, 50}, pos, total = 5, student_roll;
  cin >> student_roll;
  pos = -1;

  for (int i = 0; i < total; i++) {
    if (student_roll == arr[i]) {
      pos = i + 1;
      break;
    }
  }

  if (pos == -1) {
    cout << "Your position is not found" << endl;
  } else {
    cout << "Your number is found and yuor position is - " << pos;
  }
}