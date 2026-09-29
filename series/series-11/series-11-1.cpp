// Lesson: series 11 1 example.
#include <iostream>
using namespace std;

int main() {

  int i, odd = 0, even = 0, n;

  cout << "ENter the last number of serise - ";
  cin >> n;

  for (i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      even = even + i;
    } else {
      odd = odd + i;
    }
  }

  cout << "Sum is = " << odd - even;
}
