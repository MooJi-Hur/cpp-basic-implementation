/*
 * Problem: 1048 Power_of_Two_Multiply
 * URL: https://codeup.kr/problem.php?id=1048
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int firstFactor = 1;
  int secondFactor = 1;
  int exponentValue = 1;

  cin >> firstFactor >> exponentValue;

  secondFactor = 1 << (exponentValue);

  cout << firstFactor * secondFactor << endl;

  return 0;
}