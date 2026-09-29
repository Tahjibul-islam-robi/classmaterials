// Lesson: class11 1 example.
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  cout << showpoint;

  double cels, fare;

  cout << "Enter the celsius : " << setw(15);
  cin >> cels;

  fare = cels * 9.0 / 5.0 + 32.0; // Keep the conversion factor fractional.

  cout << "The fahrenheit : " << fare << setw(15);
}