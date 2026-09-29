// Lesson: series 9 1 example.
#include <iostream>
using namespace std;

int main() {
  int n, sum = 1;

  cout << "Enter the last number of serise  -  ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    sum = sum * i;
  }

  cout << "1x2x3x.......xN=" << sum;
}