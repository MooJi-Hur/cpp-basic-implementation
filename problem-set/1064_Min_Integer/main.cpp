/*
 * Problem: 1064 Min_Integer
 * URL: https://codeup.kr/problem.php?id=1064
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int firstValue = 0;
  int secondValue = 0;
  int thirdValue = 0;
  int minCandidate = 0;

  cin >> firstValue >> secondValue >> thirdValue;

  minCandidate = secondValue < thirdValue ? secondValue : thirdValue;

  cout << (firstValue < minCandidate ? firstValue : minCandidate) << endl;

  return 0;
}