// Lesson: series 4 3 example.
// 1 3 5 7 .......... n

#include <iostream>
using namespace std;

int main() {
  int n, i;

  cout << "Enter a number - ";
  cin >> n;

  for (i = 1; i <= n; i = i + 2) {
    cout << i << endl;
  }
}