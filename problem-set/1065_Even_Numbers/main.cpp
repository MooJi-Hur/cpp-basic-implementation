/*
 * Problem: 1065 Even_Numbers
 * URL: https://codeup.kr/problem.php?id=1065
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  const int SIZE = 3;

  int candidates[SIZE];

  for (int i = 0; i < SIZE; i++) {
    cin >> candidates[i];
  }

  for (int i = 0; i < SIZE; i++) {
    if (candidates[i] % 2 == 0) {
      cout << candidates[i] << endl;
    }
  }

  return 0;
}