/*
 * Problem: 1018 Print_Time
 * URL: https://codeup.kr/problem.php?id=1018
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int hour, minutes;

  cin >> hour;
  cin.ignore(1, ':');
  cin >> minutes;

  cout << hour << ':' << minutes;

  return 0;
}