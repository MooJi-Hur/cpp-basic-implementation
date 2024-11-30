/*
 * Problem: 1044 Integer_Plus_One
 * URL: https://codeup.kr/problem.php?id=1044
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int initValue = 0;

  long int nextValue = 0;

  cin >> initValue;

  nextValue = static_cast<long int>(initValue);

  nextValue++;

  cout << nextValue;

  return 0;
}