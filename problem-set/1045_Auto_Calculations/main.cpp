/*
 * Problem: 1045 Auto_Calculations
 * URL: https://codeup.kr/problem.php?id=1045
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
  int firstValue = 0;
  int secondValue = 0;

  cin >> firstValue >> secondValue;

  cout << firstValue + secondValue << endl;
  cout << firstValue - secondValue << endl;
  cout << firstValue * secondValue << endl;
  cout << firstValue / secondValue << endl;
  cout << firstValue % secondValue << endl;

  cout << fixed << setprecision(2) << float(firstValue) / secondValue << endl;

  return 0;
}