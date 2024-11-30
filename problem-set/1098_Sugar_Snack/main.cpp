/*
 * Problem: 1098 Sugar_Snack
 * URL: https://codeup.kr/problem.php?id=1098
 */

// Solution code starts here
#include <iostream>
#include <set>
#include <sstream>
#include <tuple>

using namespace std;

int main(void) {
  int height, width;

  cin >> height >> width;

  int board[height + 1][width + 1];

  for (int i = 1; i < height + 1; i++) {
    for (int j = 1; j < width + 1; j++) {
      board[i][j] = 0;
    }
  }

  int count;

  cin >> count;

  int infos[count][4];

  set<tuple<int, int>> positions;

  for (int i = 0; i < count; i++) {
    int length, x, y;
    bool vertical;

    cin >> length >> vertical >> x >> y;

    if (vertical) {
      for (int v = 0; v < length; v++) {
        board[x + v][y] = 1;
      }
    } else {
      for (int h = 0; h < length; h++) {
        board[x][y + h] = 1;
      }
    }
  }

  stringstream boardStream;

  for (int i = 1; i < height + 1; i++) {
    for (int j = 1; j < width + 1; j++) {
      boardStream << board[i][j] << ' ';
    }
    boardStream << endl;
  }

  cout << boardStream.str();

  return 0;
}