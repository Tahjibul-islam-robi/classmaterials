// Lesson: loop project 6 example.
#include <iostream>
using namespace std;

int main() {

  int num, temp, sum = 0, rem;
  cout << "Enter a number - ";
  cin >> num;

  temp = num;

  while (temp != 0) {
    rem = temp % 10;
    sum = sum * 10 + rem;
    temp /= 10;
  }
  if (num == sum) {
    cout << "Palindrome number";
  } else {
    cout << "not a palindrome number";
  }
}
