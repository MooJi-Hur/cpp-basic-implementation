/*
 * Problem: 1027 Date_Format
 * URL: https://codeup.kr/problem.php?id=1027
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
  int year, month, day;
  char dot, hyphen = '-';

  cin >> year >> dot >> month >> dot >> day;

  cout << setw(2) << setfill('0') << day << hyphen << setw(2) << setfill('0')
       << month << hyphen << setw(4) << setfill('0') << year;

  return 0;
}