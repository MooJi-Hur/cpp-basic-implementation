/*
 * Problem: 1077 Output_Until_Integer
 * URL: https://codeup.kr/problem.php?id=1077
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int target = 0;

  cin >> target;

  for (int i = 0; i <= target; i++) {
    cout << i << endl;
  }

  return 0;
}