/*
 * Problem: 1057 Equal_Boolean
 * URL: https://codeup.kr/problem.php?id=1057
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  bool firstValue = 0;
  bool secondValue = 1;

  cin >> firstValue >> secondValue;

  cout << (firstValue == secondValue) << endl;

  return 0;
}