// Lesson: power function 1 example.
#include <cmath>
#include <iostream>
using namespace std;

int main() {

  int x, y, ans;

  cout << "Enter the base - ";
  cin >> x;
  cout << "Enter to the power - ";
  cin >> y;

  ans = pow(x, y);
  cout << ans;
}