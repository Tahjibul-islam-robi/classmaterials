// Lesson: loop project 9 example.
#include <iostream>
using namespace std;

int main() {
  int num, sum = 0, rem, temp, fact;

  cout << "enter a number - ";
  cin >> num;
  temp = num;
  while (temp != 0) {
    rem = temp % 10;
    fact = 1;
    for (int i = 1; i <= rem; i++) {
      fact = i * fact;
    }
    sum = sum + fact;
    temp = temp / 10;
  }
  if (sum == num) {
    cout << "It is a strong number";
  } else {
    cout << "It is not a strong number";
  }
}