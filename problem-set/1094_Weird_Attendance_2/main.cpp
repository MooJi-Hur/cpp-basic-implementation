/*
 * Problem: 1094 Weird_Attendance_2
 * URL: https://codeup.kr/problem.php?id=1094
 */

// Solution code starts here
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int callSize = 0;

  cin >> callSize;

  vector<int> calls(callSize + 1);

  for (int i = 1; i <= callSize; i++) {
    cin >> calls[i];
  }

  for (int i = callSize; i > 0; i--) {
    cout << calls[i] << endl;
  }

  return 0;
}