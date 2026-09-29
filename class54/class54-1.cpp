// Lesson: class54 1 example.
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

  for (int i = 1; i <= 5; i++) {
    int random = rand() % 6 + 1;
    cout << "Random number is - " << random << endl;
  }
}