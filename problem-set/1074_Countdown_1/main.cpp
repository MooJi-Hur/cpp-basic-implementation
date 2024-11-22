/*
 * Problem: 1074 Countdown_1
 * URL: https://codeup.kr/problem.php?id=1074
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int targetValue = 0;

  cin >> targetValue;

  while (targetValue > 0) {
    cout << targetValue << endl;
    targetValue--;
  }

  return 0;
}