// Lesson: triangle example.
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  cout << showpoint;
  cout << setprecision(8);
  double area, ba, hi;

  cout << "enter the base : ";
  cin >> ba;

  cout << "enter the height : ";
  cin >> hi;

  area = 0.5 * ba * hi;

  cout << "the area is : " << area;
}