/*
 * Problem: 1055 Or_Boolean
 * URL: https://codeup.kr/problem.php?id=1055
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  bool firstValue = 0;
  bool secondValue = 0;

  cin >> firstValue >> secondValue;
  cout << (firstValue || secondValue) << endl;

  return 0;
}