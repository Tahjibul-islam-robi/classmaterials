// Lesson: series 1 2 example.
// 1+3+5+....+;defarens-2;

#include <iostream>
using namespace std;

int main() {

  while (true) {
    int n, sum = 0;
    cout << "Enter the last digit of series  : ";
    cin >> n;

    for (int i = 1; i <= n; i = i + 2) {
      sum = sum + i;
    }
    cout << "1+2+3+.......+" << n << " = " << sum << endl;
  }
}