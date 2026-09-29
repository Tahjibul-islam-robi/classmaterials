// Lesson: class25 1 example.
#include <iostream>
using namespace std;

int main() {

  char c;
  cout << "Enter a charactor - ";
  cin >> c;

  c = toupper(c);

  if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
    cout << "vowel";
  } else {
    cout << "consonant";
  }
}
