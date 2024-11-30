/*
 * Problem: 1073 Infinite_Output_Zero
 * URL: https://codeup.kr/problem.php?id=1073
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int inValue = -1;
  cin >> inValue;

  while (inValue != 0) {
    cout << inValue << endl;
    cin >> inValue;
  }

  return 0;
}