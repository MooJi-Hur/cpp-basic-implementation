/*
 * Problem: 1070 Season_Output
 * URL: https://codeup.kr/problem.php?id=1070
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int month = 0;

  string season;

  cin >> month;

  switch (month) {
    case 12:
    case 1:
    case 2:
      season = "winter";
      break;

    case 3:
    case 4:
    case 5:
      season = "spring";
      break;

    case 6:
    case 7:
    case 8:
      season = "summer";
      break;

    case 9:
    case 10:
    case 11:
      season = "fall";
      break;

    default:
      break;
  }

  cout << season << endl;

  return 0;
}