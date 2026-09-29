// Lesson: class11 practice example.
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  cout << showpoint;

  double far, cel;

  cout << "Enter the fahrenheit(in degree) : ";
  cin >> far;
  cel = (far - 32) / 1.8;

  cout << "the celsius is : " << cel;
}