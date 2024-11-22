/*
 * Problem: 1083 Three_Six_Nine_Game
 * URL: https://codeup.kr/problem.php?id=1083
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int finish = 1;
  char clap = 'X';

  cin >> finish;

  for (int i = 1; i <= finish; i++) {
    if (i % 3 == 0) {
      cout << clap << ' ';
    } else {
      cout << i << ' ';
    }
  }
  return 0;
}