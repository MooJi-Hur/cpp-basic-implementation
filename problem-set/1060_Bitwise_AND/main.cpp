/*
 * Problem: 1060 Bitwise_AND
 * URL: https://codeup.kr/problem.php?id=1060
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int firstValue = 0;
  int secondValue = 0;

  cin >> firstValue >> secondValue;
  cout << (firstValue & secondValue) << endl;

  return 0;
}