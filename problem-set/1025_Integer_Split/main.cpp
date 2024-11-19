/*
 * Problem: 1025 Integer_Split
 * URL: https://codeup.kr/problem.php?id=1025
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
  int fullValue;

  cin >> fullValue;

  int currentDigits = 4;

  while (currentDigits > -1) {
    int decimal = pow(10, currentDigits);

    float decimalValue = fullValue / decimal;

    float integerPart = 1;

    float fractionPart = modf(decimalValue, &integerPart);

    cout << "[" << integerPart * decimal << "]" << endl;

    fullValue = fullValue - (integerPart * decimal);

    currentDigits--;
  }

  return 0;
}