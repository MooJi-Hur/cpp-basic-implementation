/*
 * Problem: 1091 Sequence_3
 * URL: https://codeup.kr/problem.php?id=1091
 */

// Solution code starts here
#include <iomanip>
#include <iostream>

using namespace std;

long long power(long long base, int exp) {
  long long result = 1;

  while (exp > 0) {
    if (exp % 2 == 1) {
      result *= base;
    }

    base *= base;

    exp /= 2;
  }

  return result;
}

int main(void) {
  long long start, ratio, difference, n;

  cin >> start >> ratio >> difference >> n;

  long long term;

  if (ratio == 1) {
    // ratio == 1일 경우 등차수열과 동일
    term = start + (n - 1) * difference;
  } else {
    long long numerator =
        (power(ratio, n - 1) * (start * (ratio - 1) + difference) - difference);

    long long denominator = (ratio - 1);

    term = numerator / denominator;
  }

  cout << fixed << setprecision(0) << term;

  return 0;
}