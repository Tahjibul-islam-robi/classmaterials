// Lesson: 1D array linear search example.
#include <iostream>
using namespace std;

int pasward = 1234, n, a[100], num, pos, ne;

void admin_verson() {

  cout << "Enter the passward - ";
  cin >> n;
  if (pasward == n) {
    cout << "how many student do you want yo enter - ";
    cin >> num;

    for (int i = 0; i < num; i++) {
      cout << "position[" << i + 1 << "]-";
      cin >> a[i];
    }
  } else {
    cout << "YOur passward is wrong!plese try again" << endl;
  }
}

void user_verson() {
  cout << "enter the number - ";
  cin >> ne;
  pos = -1;
  for (int i = 0; i < num; i++) {

    if (ne == a[i]) {
      pos = i + 1;
      break;
    }
  }

  if (pos == -1) {
    cout << "your number is not found!" << endl;
  } else {
    cout << "your number is found , your position is " << pos << endl;
  }
}

int main() {
  while (true) {
    int i;
    cout << "if you are Admin enter 1" << endl;
    cout << "if you are a user enter 2" << endl;
    cout << "if you want to exit enter 3" << endl;

    cin >> i;

    switch (i) {
    case 1:
      admin_verson();
      break;

    case 2:
      user_verson();
      break;

    case 3:
      exit(0);
      break;

    default:
      cout << "your choose is wrong!" << endl;
    }
  }
}