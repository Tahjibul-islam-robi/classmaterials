// Lesson: class37 1 example.
#include <iostream>
using namespace std;

int main() {

  int x;
  cout << "Enter a int : ";
  cin >> x;

  for (int i = 0; i <= 30; i++) {
    cout << x << "*" << i << "=" << x * i << endl;
  }
}
