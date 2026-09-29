// Lesson: loop project 5 example.
#include <iostream>
using namespace std;

int main() {

  int num, temp, sum = 0, rem;
  cout << "Enter a number - ";
  cin >> num;

  temp = num;

  while (temp != 0) {
    rem = temp % 10;
    sum += rem;
    temp /= 10;
  }

  cout << "sum of the digit is - " << sum;
}
