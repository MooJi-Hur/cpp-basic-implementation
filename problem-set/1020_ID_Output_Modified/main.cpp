/*
 * Problem: 1020 ID_Output_Modified
 * URL: https://codeup.kr/problem.php?id=1020
 */

// Solution code starts here
#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
  int birthday;
  int idSeperator;
  char hyphen;

  cin >> birthday >> hyphen >> idSeperator;

  cout << setw(6) << setfill('0') << birthday << setw(7) << setfill('0')
       << idSeperator;

  return 0;
}