// Lesson: series 6 2 example.
// 1.5+2.5+3.5+.......+N

#include <iostream>
using namespace std;

int main() {

  float i = 1, sum = 0, n;

  cout << "ENter the last number of serise - ";
  cin >> n;

  while (i <= n) {
    sum += i;
  }

  cout << " 1.5+2.5+3.5+...." << n << "=" << sum;
}