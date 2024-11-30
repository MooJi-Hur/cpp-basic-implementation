/*
 * Problem: 1062 Bitwise_XOR
 * URL: https://codeup.kr/problem.php?id=1062
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int firstValue = 0;
  int secondValue = 0;

  cin >> firstValue >> secondValue;
  cout << (firstValue ^ secondValue) << endl;

  return 0;
}