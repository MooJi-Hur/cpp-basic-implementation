/*
 * Problem: 1046 Sum_and_Average
 * URL: https://codeup.kr/problem.php?id=1046
 */

// Solution code starts here
#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
  int firstValue = 0;
  int secondValue = 0;
  int thirdValue = 0;

  long int sum = 0;

  cin >> firstValue >> secondValue >> thirdValue;

  sum += static_cast<long int>(firstValue);
  sum += static_cast<long int>(secondValue);
  sum += static_cast<long int>(thirdValue);

  cout << sum << endl;

  cout << fixed << setprecision(1) << float(sum) / 3 << endl;

  return 0;
}