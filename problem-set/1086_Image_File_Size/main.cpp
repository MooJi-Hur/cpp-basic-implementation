/*
 * Problem: 1086 Image_File_Size
 * URL: https://codeup.kr/problem.php?id=1086
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
  int width = 0, height = 0;
  int bit = 0;

  long long totalBit = 0;
  double totalMB = 0.0;

  cin >> width >> height >> bit;

  totalBit = static_cast<long long>(bit) * width * height;

  totalMB = static_cast<double>(totalBit) / (1 << 23);

  cout << fixed << setprecision(2) << totalMB << ' ' << "MB" << endl;

  return 0;
}