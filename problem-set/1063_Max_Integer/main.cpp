/*
 * Problem: 1063 Max_Integer
 * URL: https://codeup.kr/problem.php?id=1063
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int firstValue = 0;
  int secondValue = 0;

  cin >> firstValue >> secondValue;

  cout << (firstValue > secondValue ? firstValue : secondValue) << endl;

  return 0;
}