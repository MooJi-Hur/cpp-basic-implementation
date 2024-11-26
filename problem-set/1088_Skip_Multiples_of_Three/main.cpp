/*
 * Problem: 1088 Skip_Multiples_of_Three
 * URL: https://codeup.kr/problem.php?id=1088
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int target = 0;

  cin >> target;
  for (int i = 0; i <= target; i++) {
    if (i % 3 == 0) {
      continue;
    }

    cout << i << ' ';
  }

  return 0;
}