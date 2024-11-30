/*
 * Problem: 1066 Even_Odd
 * URL: https://codeup.kr/problem.php?id=1066
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  const int IN_SIZE = 3;

  int inValues[IN_SIZE];

  for (int i = 0; i < IN_SIZE; i++) {
    cin >> inValues[i];
  }

  for (int i = 0; i < IN_SIZE; i++) {
    cout << (inValues[i] % 2 == 0 ? "even" : "odd") << endl;
  }
  return 0;
}