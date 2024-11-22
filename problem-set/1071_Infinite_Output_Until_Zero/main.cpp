/*
 * Problem: 1071 Infinite_Output_Until_Zero
 * URL: https://codeup.kr/problem.php?id=1071
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int targetValue = -1;
reload:
  cin >> targetValue;
  if (targetValue != 0) {
    cout << targetValue << endl;
    goto reload;
  }

  return 0;
}