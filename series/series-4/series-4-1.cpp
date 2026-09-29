// Lesson: series 4 1 example.
// 1 2 3 4 ......... n

#include <iostream>
using namespace std;

int main() {
  int n, i;

  cout << "Enter a number - ";
  cin >> n;

  for (i = 1; i <= n; i = i + 1) {
    cout << i << endl;
  }
}