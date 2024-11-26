/*
 * Problem: 1089 Sequence_1
 * URL: https://codeup.kr/problem.php?id=1089
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int start = 0, difference = 0, target = 0;

  cin >> start >> difference >> target;

  int term = start + difference * (target - 1);

  cout << term;

  return 0;
}