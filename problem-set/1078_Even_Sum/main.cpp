/*
 * Problem: 1078 Even_Sum
 * URL: https://codeup.kr/problem.php?id=1078
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int target = 0;
  int sum = 0;

  cin >> target;

  for (int i = 0; i <= target; i++) {
    if (i % 2 == 0) {
      sum += i;
    }
  }

  cout << sum;

  return 0;
}