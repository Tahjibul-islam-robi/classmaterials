// Lesson: class31 1 example.
#include <iostream>
using namespace std;

int main() {

  char n, d;
  cout << "Enter a charector - ";
  cin >> n;

  d = static_cast<char>(tolower(static_cast<unsigned char>(n)));

  switch (d) {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    cout << "Vowel";
    break;

  default:
    cout << "consonenT";
    break;
  }
}