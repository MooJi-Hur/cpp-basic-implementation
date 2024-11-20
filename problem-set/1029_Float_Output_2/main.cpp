/*
 * Problem: 1029 Float_Output_2
 * URL: https://codeup.kr/problem.php?id=1029
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
  double longFloatValue;

  cin >> longFloatValue;
  cout << fixed << setprecision(11) << longFloatValue;
  return 0;
}