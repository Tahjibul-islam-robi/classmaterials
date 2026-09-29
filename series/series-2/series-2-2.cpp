// Lesson: series 2 2 example.
// 1+3+5+........+n=?;def=2;

#include <iostream>
using namespace std;

int main() {
  while (true) {
    int n, sum = 0, i = 1;
    cout << "Enter the last number of serise - ";
    cin >> n;

    while (i <= n) {
      sum += i;
      i += 2;
    }

    cout << "1+3+5+........+" << n << "=" << sum << endl;
  }
}