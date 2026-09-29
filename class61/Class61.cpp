// Lesson: Class61 example.
#include <iostream>
using namespace std;

int x = 10;

int main() {
  int x = 5; // This local variable hides the global x inside main.
  cout << "Local x is - " << x << endl;
  cout << "Global x is - " << ::x << endl;
}