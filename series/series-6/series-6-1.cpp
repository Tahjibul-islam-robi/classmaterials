// Lesson: series 6 1 example.
// 1.5+2.5+3.5+.......+N

#include <iostream>
using namespace std;

int main() {

  float i, sum = 0, n;

  cout << "ENter the last number of serise - ";
  cin >> n;

  for (i = 1.5; i <= n; i++) {
    sum = sum + i;
  }

  cout << " 1.5+2.5+3.5+...." << n << "=" << sum;
}