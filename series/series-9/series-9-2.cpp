// Lesson: series 9 2 example.
#include <iostream>
using namespace std;

int main() {
  int n, sum = 1;

  cout << "Enter the last number of serise  -  ";
  cin >> n;

  int i = 1;

  while (i <= n) {
    sum = sum * i;
    i++;
  }

  cout << "1x2x3x.......xN=" << sum;
}