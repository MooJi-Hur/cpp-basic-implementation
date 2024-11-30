/*
 * Problem: 1085 Audio_File_Size
 * URL: https://codeup.kr/problem.php?id=1085
 */

// Solution code starts here
#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
  int hz = 0;
  int bit = 0, byte = 0;
  int channel = 0;
  int seconds = 0;

  long long totalByte = 0;
  double totalMB = 0.0;

  cin >> hz >> bit >> channel >> seconds;

  byte = bit >> 3;

  totalByte = static_cast<long long>(byte) * hz * channel * seconds;

  totalMB = static_cast<double>(totalByte) / (1 << 20);

  cout << fixed << setprecision(1) << totalMB << ' ' << "MB" << endl;

  return 0;
}