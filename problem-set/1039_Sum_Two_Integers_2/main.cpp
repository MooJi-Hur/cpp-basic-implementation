/*
 * Problem: 1039 Sum_Two_Integers_2
 * URL: https://codeup.kr/problem.php?id=1039
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  long int firstValue = 0;
  long int secondValue = 0;

  long int addValue = 0;

  cin >> firstValue >> secondValue;

  addValue = firstValue + secondValue;
  cout << addValue;
  return 0;
}