// Lesson: vector demo example.
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> ve(50, 7);
  cout << ve.size() << endl;
  for (int i = 0; i < 50; i++) {
    cout << ve.at(i) << "\t";
  }
}
