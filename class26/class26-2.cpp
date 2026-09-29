// Lesson: class26 2 example.
#include <iostream>

using namespace std;

int main() {

  int num1, num2, num3;

  cout << "Enter three number : ";
  cin >> num1 >> num2 >> num3;

  if (num1 <= num2 && num1 <= num3) {
    cout << "small number  - " << num1;

  }

  else if (num2 <= num1 && num2 <= num3) {
    cout << "small number  - " << num2 << endl;
  }

  else {
    cout << "small number  - " << num3;
  }
}
