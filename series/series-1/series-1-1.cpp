// Lesson: series 1 1 example.
// 1+2+3+....+;defarens-1;

#include <iostream>
using namespace std;

int main() {

  while (true) {
    int n, sum = 0;
    cout << "Enter the last digit of series  : ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
      sum = sum + i;
    }
    cout << "1+2+3+.......+" << n << " = " << sum << endl;
  }
}