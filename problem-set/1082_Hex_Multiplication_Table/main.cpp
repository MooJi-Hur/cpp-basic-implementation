/*
 * Problem: 1082 Hex_Multiplication_Table
 * URL: https://codeup.kr/problem.php?id=1082
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  int firstFactor = 10;

  cin >> hex >> firstFactor;

  for (int i = 1; i < 16; i++) {
    cout << uppercase << hex << firstFactor << '*' << i << '='
         << i * firstFactor << endl;
  }

  return 0;
}