/*
 * Problem: 1015 Float_Two_Decimal
 * URL: https://codeup.kr/problem.php?id=1015
 */

// Solution code starts here
#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
  float fullValue;

  cin >> fullValue;
  cout << fixed << setprecision(2) << fullValue;

  return 0;
}