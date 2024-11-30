/*
 * Problem: 1019 Date_Output
 * URL: https://codeup.kr/problem.php?id=1019
 */

// Solution code starts here
#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
  int year, month, day;
  char dot;

  cin >> year >> dot >> month >> dot >> day;

  cout << setw(4) << setfill('0') << year << dot << setw(2) << setfill('0')
       << month << dot << setw(2) << setfill('0') << day;

  return 0;
}