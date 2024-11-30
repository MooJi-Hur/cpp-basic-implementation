/*
 * Problem: 1067 Analyze_Integer
 * URL: https://codeup.kr/problem.php?id=1067
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int targetValue = 0;

  cin >> targetValue;

  cout << (targetValue < 0 ? "minus" : "plus") << endl;
  cout << (targetValue % 2 == 0 ? "even" : "odd") << endl;

  return 0;
}