// Lesson: class76 1 example.
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1 = "Tahjibul ";
  string str2 = "Islam";
  string st3;

  st3 = str1;
  cout << "Str3 = " << st3 << endl;

  st3 = str1 + str2;
  cout << "str1+str2 = " << st3 << endl;

  int len = str1.size();
  cout << "Lenght is -" << len << endl;
}