/*
 * Problem: 1041 Next_Char
 * URL: https://codeup.kr/problem.php?id=1041
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  char initAscii;
  char nextAscii;

  cin >> initAscii;

  nextAscii = initAscii + 1;

  cout << nextAscii;

  return 0;
}