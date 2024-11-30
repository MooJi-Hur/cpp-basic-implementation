/*
 * Problem: 1076 Alphabet_Output
 * URL: https://codeup.kr/problem.php?id=1076
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  char myAlphabet = 'a';
  char target;

  cin >> target;

  do {
    cout << myAlphabet << ' ';
    myAlphabet++;
  } while (myAlphabet <= target);

  return 0;
}