/*
 * Problem: 1061 Bitwise_OR
 * URL: https://codeup.kr/problem.php?id=1061
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int firstValue = 0;
  int secondValue = 0;

  cin >> firstValue >> secondValue;

  cout << (firstValue | secondValue) << endl;

  return 0;
}