/*
 * Problem: 1090 Sequence_2
 * URL: https://codeup.kr/problem.php?id=1090
 */

// Solution code starts here
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
  int start = 0;
  double ratio = 0, target = 0;

  cin >> start >> ratio >> target;

  double term = start * pow(ratio, target - 1);

  cout << fixed << setprecision(0) << term;

  return 0;
}