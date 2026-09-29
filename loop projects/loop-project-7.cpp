// Lesson: loop project 7 example.
#include <iostream>
using namespace std;

int main() {

  int num, temp, sum = 0, rem;
  cout << "Enter a number - ";
  cin >> num;

  temp = num;

  while (temp != 0) {
    rem = temp % 10;
    sum = sum + rem * rem * rem;
    temp /= 10;
  }

  if (sum == num) {
    cout << "amstrong";
  }

  else {
    cout << "not armstrong";
  }
}
