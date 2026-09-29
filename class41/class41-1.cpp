// Lesson: class41 1 example.
#include <iostream>
using namespace std;

void array_initialigation_printing() {
  int student[5] = {5, 4, 3, 2, 1}, i;

  for (i = 0; i < 5; i++) {
    cout << student[i] << endl;
  }
}
int main() {

  int student[5];

  student[0] = 5;
  student[1] = 4;
  student[2] = 3;
  student[3] = 2;
  student[4] = 1;

  cout << student[0] << endl;
  cout << student[1] << endl;
  cout << student[2] << endl;
  cout << student[3] << endl;
  cout << student[4] << endl;
}