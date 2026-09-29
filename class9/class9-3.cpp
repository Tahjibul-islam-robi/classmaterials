// Lesson: class9 3 example.
#include <iomanip> //for setprecision
#include <iostream>
using namespace std;

int main() {

  int num1, num2;

  cout << "enter friest number: ";
  cin >> num1;

  cout << "enter second number: ";
  cin >> num2;

  cout << showpoint; // showpoint is use for show point??non showpoint the ans
                     // like 10with showpoint the ans like10.000000
  cout << setprecision(
      10); // setprecision is used  for more  number?//without set precision the
           // number like 1.00000(only 6 num)and with setprecision the number is
           // like 10.0000000000000 note:you need 10 point num so,you will
           // declear you need to show 10 pointnum,,,,,.....

  float sum = num1 + num2;
  cout << setw(30) << "the addition is = " << sum;
  cout << endl;

  float sub = num1 - num2;
  cout << setw(30) << "the subtriction is = " << sub;
  cout << endl;

  float mul = num1 * num2;
  cout << setw(30) << "the multipication is = " << mul;
  cout << endl;

  double div = (double)num1 / num2; // type casting
  cout << setw(30) << "the divition is = " << div;
  cout << endl;

  // float rem = num1 % num2;//reminder is not for float or doubl
  // cout<<"the reminder is = "<<rem;
  // cout<< endl;
}