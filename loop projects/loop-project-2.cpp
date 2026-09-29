// Lesson: loop project 2 example.
#include <iostream>
using namespace std;

int main() {

  long long int fact = 1, n;

  cout << "Enter a int : ";
  cin >> n;

  for (long long int i = 1; i <= n; i++) {
    fact = i * fact;
  }

  cout << "factorial is - " << fact;
}