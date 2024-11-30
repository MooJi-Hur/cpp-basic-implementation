/*
 * Problem: 1087 Stop_At_Limit
 * URL: https://codeup.kr/problem.php?id=1087
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int target = 0;
  long long sum = 0;

  cin >> target;

  for (int i = 0; i <= target; i++) {
    if (sum >= target) {
      break;
    }
    sum += static_cast<long long>(i);
  }

  cout << sum;

  return 0;
}