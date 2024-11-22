/*
 * Problem: 1080 Summation_Limit
 * URL: https://codeup.kr/problem.php?id=1080
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int target = 0;
  int sum = 0;
  int counter = 0;

  cin >> target;

  do {
    counter++;
    sum += counter;

  } while (sum < target);

  cout << counter;

  return 0;
}