/*
 * Problem: 1095 Weird_Attendance_3
 * URL: https://codeup.kr/problem.php?id=1095
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int callCount = 0;
  int smallestNumber = 24;

  cin >> callCount;

  for (int i = 0; i < callCount; i++) {
    int call;

    cin >> call;

    if (call < smallestNumber) {
      smallestNumber = call;
    }
  }

  cout << smallestNumber;

  return 0;
}