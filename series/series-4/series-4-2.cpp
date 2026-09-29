// Lesson: series 4 2 example.
// 2 4 6 8 10 ..... n

#include <iostream>
using namespace std;

int main() {
  int n, i;

  cout << "Enter a number - ";
  cin >> n;

  for (i = 2; i <= n; i = i + 2) {
    cout << i << endl;
  }
}