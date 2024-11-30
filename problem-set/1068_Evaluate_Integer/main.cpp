/*
 * Problem: 1068 Evaluate_Integer
 * URL: https://codeup.kr/problem.php?id=1068
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int targetValue = 0;
  char grade;

  cin >> targetValue;

  if (targetValue >= 90) {
    grade = 'A';

  } else if (targetValue >= 70) {
    grade = 'B';

  } else if (targetValue >= 40) {
    grade = 'C';

  } else {
    grade = 'D';
  }

  cout << grade << endl;
  return 0;
}