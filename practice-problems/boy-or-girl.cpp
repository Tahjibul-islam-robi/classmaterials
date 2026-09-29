// Lesson: boy or girl example.
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string st;
  cin >> st;
  sort(st.begin(), st.end());
  int count = static_cast<int>(unique(st.begin(), st.end()) - st.begin());

  if (count % 2 == 0) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }
}

// seven
// eensv