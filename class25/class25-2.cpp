// Lesson: class25 2 example.
#include <iostream>
using namespace std;

int main() {

  char c;
  cout << "Enter a charactor - ";
  cin >> c;

  c = tolower(c);

  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
    cout << "vowel";
  } else {
    cout << "consonant";
  }
}