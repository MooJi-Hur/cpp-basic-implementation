/*
 * Problem: 1084 Light_Mix_Color
 * URL: https://codeup.kr/problem.php?id=1084
 * Description: [Add description here if needed]
 */

// Solution code starts here
// #include <chrono>  // 시간 측정을 위한 헤더
#include <iostream>
#include <sstream>

using namespace std;

int main(void) {
  // 시작 시간 기록
  // auto start = std::chrono::high_resolution_clock::now();

  int caseCounter = 0;
  int r, g, b;
  int rSize, gSize, bSize;
  int rUnitSize;

  cin >> rSize >> gSize >> bSize;

  caseCounter = rSize * gSize * bSize;

  rUnitSize = gSize * bSize;

  stringstream resultStream;

  for (int i = 0; i < caseCounter; i++) {
    r = i / rUnitSize;

    int rFactor = i - r * rUnitSize;

    g = rFactor / bSize;
    b = rFactor - g * bSize;

    resultStream << r << ' ' << g << ' ' << b << '\n';
  }

  cout << resultStream.str();

  cout << caseCounter << endl;

  // 종료 시간 기록
  // auto end = std::chrono::high_resolution_clock::now();

  // 실행 시간 계산 (초 단위)
  // std::chrono::duration<double> duration = end - start;

  // cout << "실행 시간: " << duration.count() << " 초" << endl;

  return 0;
}
