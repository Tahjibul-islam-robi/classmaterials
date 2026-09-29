// Lesson: series 8 1 example.
// 1 + 1/2 + 1/3 +.... + 1/ n

#include <iostream>
using namespace std;

int main() {
  double i, n, sum = 0;

  cout << "ENter the last number of serise = ";
  cin >> n;

  for (i = 1; i <= n; i++) {
    sum += 1 / i;
  }
  cout << "sum = " << sum;
}
