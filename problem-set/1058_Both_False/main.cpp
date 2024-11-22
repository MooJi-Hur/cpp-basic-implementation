/*
 * Problem: 1058 Both_False
 * URL: https://codeup.kr/problem.php?id=1058
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  bool firstValue = 0;
  bool secondValue = 0;

  cin >> firstValue >> secondValue;

  cout << (firstValue + secondValue == 0) << endl;

  return 0;
}