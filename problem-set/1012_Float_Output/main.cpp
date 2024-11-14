/*
 * Problem: 1012 Float_Output
 * URL: https://codeup.kr/problem.php?id=1012
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iomanip>  // IO Manipulators for formatting input output
#include <iostream>

using namespace std;

int main(void) {
  float floatNumber;

  cin >> floatNumber;

  // float은 4byte 크기
  // 1byte는 8bit라 할 때, 32bit
  // 부호 1bit + 지수 비트 8bit + 가수 비트 23bit
  // 2^24는 16,777,216로 8자리이나, 근사치 계산으로 6~7자리 수를 표현할 수 있음
  cout << fixed << setprecision(6) << floatNumber;  // 정밀도를 6으로 둠

  return 0;
}