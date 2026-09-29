// Lesson: robbi example.
#include <iostream>
using namespace std;

int arr[10], pos, student_roll, total = 0;

void admin_verson() {
  int input;
  cout << "HOw many student do you want to enter - ";
  cin >> input;

  if (total == 0) {
    total += input;
    for (int i = 0; i < total; i++) {
      cout << "Position[" << i + 1 << "]-";
      cin >> arr[i];
    }
  }

  else {
    for (int i = total; i < total + input; i++) {
      cout << "Position[" << i + 1 << "]-";
      cin >> arr[i];
    }
  }
}

void admin_verson_c() {
  int pass;
  cout << "Enter your password - ";
  cin >> pass;
  if (pass == 1234)
    admin_verson();
  else
    cout << "Wrong password Entered!!" << endl;
}
void user_verson() {
  cout << "What is your roll no.  =  ";
  cin >> student_roll;
  pos = -1;
  for (int i = 0; i < total; i++) {
    if (arr[i] == student_roll) {
      pos = i + 1;
    }
  }

  if (pos == -1) {
    cout << "Your number is not Found!!";
  } else {
    cout << "Your postion is found,And your postion is - " << pos << endl;
  }
}

int main() {

  while (1) {
    int choice;
    cout << "Press 1 , as a admin \npress 2 as a student\npress 3 to exit"
         << endl;
    cin >> choice;

    switch (choice) {
    case 1:
      admin_verson_c();
      break;

    case 2:
      user_verson();
      break;

    case 3:
      exit(0);
      break;

    default:
      cout << "Worng number pressed!!";
      break;
    }
  }
}