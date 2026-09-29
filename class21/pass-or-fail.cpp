// Lesson: pass or fail example.
#include <iostream>

using namespace std;

int main() {

  double num;
  cout << "Enter your number : ";
  cin >> num;

  if (num >= 33) {
    cout << "you are pass";
  }

  else {
    cout << "you are fail";
  }
}