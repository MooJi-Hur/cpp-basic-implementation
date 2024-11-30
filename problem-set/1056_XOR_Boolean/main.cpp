/*
 * Problem: 1056 XOR_Boolean
 * URL: https://codeup.kr/problem.php?id=1056
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  bool firstValue = 0;
  bool secondValue = 0;

  cin >> firstValue >> secondValue;

  cout << (firstValue != secondValue);

  return 0;
}