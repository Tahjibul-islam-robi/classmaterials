// Lesson: loop project 3 example.
#include <iostream>
using namespace std;

int main() {

  int n, c = 0;
  cout << "Enter a number - ";
  cin >> n;

  for (int i = 2; i < n; i++) {

    if (n % i == 0) {
      c++;
      break;
    }
  }
  if (c == 0) {
    cout << "Prime";
  } else {
    cout << "not prime";
  }
}
