/*
 * Problem: 1023 Float_Parts
 * URL: https://codeup.kr/problem.php?id=1023
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
  float fullValue, integerPart, fractionalPart;
  int fractionalPlaces = 0;

  cin >> fullValue;

  // modf : cmath 내장 함수. 실수를 받아서 정수 부분과 실수 부분으로 나눔
  fractionalPart = modf(fullValue, &integerPart);

  while (fractionalPart != round(fractionalPart)) {
    if (fractionalPlaces > 5) {
      break;
    }

    fractionalPlaces++;
    fractionalPart *= 10;
  }

  cout << integerPart << endl;
  cout << fractionalPart << endl;

  return 0;
}