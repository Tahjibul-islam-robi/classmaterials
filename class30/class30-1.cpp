// Lesson: class30 1 example.
#include <iostream>
using namespace std;

int main() {

  int di;
  cout << "Enter a digit : ";
  cin >> di;

  switch (di) {
  case 0:
    cout << "zero";
    break;

  case 1:
    cout << "one";
    break;

  case 2:
    cout << "Two";
    break;

  case 3:
    cout << "Three";
    break;

  case 4:
    cout << "Four";
    break;

  case 5:
    cout << "Five";
    break;

  case 6:
    cout << "Six";
    break;

  case 7:
    cout << "Seven";
    break;

  case 8:
    cout << "Eight";
    break;

  case 9:
    cout << "nine";
    break;

  default:
    cout << "Not a digit";
  }
}