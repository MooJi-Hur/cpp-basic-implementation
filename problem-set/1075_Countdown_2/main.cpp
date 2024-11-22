/*
 * Problem: 1075 Countdown_2
 * URL: https://codeup.kr/problem.php?id=1075
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int targetValue = 0;

  cin >> targetValue;

  while (targetValue > 0) {
    targetValue--;
    cout << targetValue << endl;
  }

  return 0;
}