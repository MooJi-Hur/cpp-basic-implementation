/*
 * Problem: 1093 Weird_Attendance_1
 * URL: https://codeup.kr/problem.php?id=1093
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int callSize = 0;
  int callConterSize = 23;

  cin >> callSize;

  vector<int> calls(callSize + 1);
  vector<int> callCounters(callConterSize + 1);

  for (int i = 1; i <= callSize; i++) {
    cin >> calls[i];
  }

  for (int i = 1; i <= callSize; i++) {
    int call = calls[i];

    callCounters[call]++;
  }

  for (int i = 1; i <= callConterSize; i++) {
    cout << callCounters[i] << endl;
  }

  return 0;
}