// Lesson: class9 1 example.
#include <iostream>
using namespace std;

int main() {

  int num1, num2;

  cout << "enter friest number: ";
  cin >> num1;

  cout << "enter second number: ";
  cin >> num2;

  cout << showpoint; // showpoint is used for show point??non showpoint the ans
                     // like 10with showpoint the ans like10.000000

  float sum = num1 + num2;
  cout << "the addition is = " << sum;
  cout << endl;

  float sub = num1 - num2;
  cout << "the subtriction is = " << sub;
  cout << endl;

  float mul = num1 * num2;
  cout << "the multipication is = " << mul;
  cout << endl;

  double div = (double)num1 / num2; // type casting
  cout << "the divition is = " << div;
  cout << endl;

  // float rem = num1 % num2;//reminder is not for float or doubl
  // cout<<"the reminder is = "<<rem;
  // cout<< endl;
}