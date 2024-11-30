/*
 * Problem: 1079 Repeat_Until_Specified_Char
 * URL: https://codeup.kr/problem.php?id=1079
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  const char QUIT = 'q';

  char inValue = 'a';

  do {
    cin >> inValue;
    cout << inValue << endl;
  } while (inValue != QUIT);

  return 0;
}