// Lesson: series 12 1 example.
#include <iostream>
using namespace std;

int main() {

  int friest = 0, second = 1, fibo, n, count = 0;

  cout << "Enter the last number of serise - ";
  cin >> n;

  while (count < n) {
    if (count <= 1) {
      fibo = count;
    }

    else {
      fibo = friest + second;
      friest = second;
      second = fibo;
    }
  }
  cout << endl << fibo;
}