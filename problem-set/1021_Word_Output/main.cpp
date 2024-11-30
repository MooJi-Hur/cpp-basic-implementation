/*
 * Problem: 1021 Word_Output
 * URL: https://codeup.kr/problem.php?id=1021
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  // 문자열은 마지막에 '\0' 즉 null char 공간이 필요
  // 공간을 50으로 할 경우, hello 입력 시 hell\0 로 저장됨
  char scanedValue[51] = "";

  cin >> scanedValue;
  cout << scanedValue;

  return 0;
}