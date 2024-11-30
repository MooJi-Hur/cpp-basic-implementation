/*
 * Problem: 1023 Float_Parts
 * URL: https://codeup.kr/problem.php?id=1023
 */

// Solution code starts here
#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
  double fullValue, fullFraction;
  int integerPart, fractionPart, digit;
  bool breaked = 0;

  const int maxDigit = 6;

  cin >> fullValue;

  integerPart = static_cast<int>(fullValue);

  fullFraction =
      integerPart > 0 ? fullValue - integerPart : -(fullValue - integerPart);

  for (int i = 0; i < maxDigit; i++) {
    float difference;

    fullFraction *= 10;

    digit = static_cast<int>(fullFraction);

    difference = (fullFraction - digit);

    if (difference < 0.000001) {
      break;
    }

    if (difference == 1) {
      fractionPart = digit + 1;
      goto PRINT;
    }
  }

  fractionPart = digit;

PRINT:
  cout << integerPart << endl;
  cout << fractionPart << endl;

  return 0;
}