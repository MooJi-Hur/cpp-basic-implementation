/*
 * Problem: 1092 Group_Problem_Solving
 * URL: https://codeup.kr/problem.php?id=1092
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>

using namespace std;

int gcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }

  return a;
}

int lcm(int a, int b) { return (a * b) / gcd(a, b); }

int main(void) {
  int firstPeriod = 0, secondPeriod = 0, thirdPeriod = 0;
  int preLCM = 0, lastLMC = 0;

  cin >> firstPeriod >> secondPeriod >> thirdPeriod;

  preLCM = lcm(firstPeriod, secondPeriod);
  lastLMC = lcm(preLCM, thirdPeriod);

  cout << lastLMC << endl;

  return 0;
}