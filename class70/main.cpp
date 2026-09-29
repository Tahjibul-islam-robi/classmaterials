// Lesson: main example.
//
//  main.cpp
//  myfristclass
//
//  Created by Robi on 23/10/23.
//

#include <iostream>

#include "MyFirstClass.hpp"
using namespace std;
int main() {

  MyFirstClass fahim;
  fahim.display();
  MyFirstClass *p = &fahim;
  /// p -> display();

  cout << p << endl;
}
