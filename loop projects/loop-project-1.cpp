// Lesson: loop project 1 example.
#include <iostream>
using namespace std;

int main() {

  int x, n;
  cout << "Enter a int : ";
  cin >> x;

  cout << "How many tabel do you need - ";
  cin >> n;
  for (int i = 0; i <= n; i++) {
    cout << x << " X " << i << " = " << x * i << endl;
  }
}