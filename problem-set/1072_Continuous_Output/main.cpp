/*
 * Problem: 1072 Continuous_Output
 * URL: https://codeup.kr/problem.php?id=1072
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int counter, inValue;

  cin >> counter;

reget:
  cin >> inValue;

  if (counter > 0) {
    cout << inValue << endl;
    counter--;
    goto reget;
  };

  return 0;
}