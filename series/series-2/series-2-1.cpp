// Lesson: series 2 1 example.
// 1+2+3+........+n=?;def=1;

#include <iostream>
using namespace std;

int main() {
  while (true) {
    int n, sum = 0, i = 1;
    cout << "Enter the last number of serise - ";
    cin >> n;

    while (i <= n) {
      sum += i;
      i++;
    }

    cout << "1+2+3+........+" << n << "=" << sum << endl;
  }
}