// Lesson: class55 1 guessing game example.
#include <iostream>
using namespace std;
int main() {
  while (1) {
    int ynum, randomnum;
    cout << "Enter your guess between (1 - 5) = ";
    cin >> ynum;

    randomnum = 1 + rand() % 5;
    if (ynum < 1 || ynum > 5) {
      cout << "Wrong number entered";
    }

    else {
      if (ynum == randomnum) {
        cout << "You have won!!" << endl << endl;
      } else if (ynum != randomnum) {
        cout << "You have lost!!" << endl
             << "The correct number is - " << randomnum << endl;
      }
    }
  }
}