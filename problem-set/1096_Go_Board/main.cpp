/*
 * Problem: 1096 Go_Board
 * URL: https://codeup.kr/problem.php?id=1096
 */

// Solution code starts here
#include <iostream>
#include <set>
#include <sstream>
#include <tuple>

using namespace std;

int main(void) {
  int whiteCount;
  int boardSize = 19;

  cin >> whiteCount;

  set<tuple<int, int>> positions;

  for (int i = 0; i < whiteCount; i++) {
    int xPosition;
    int yPosition;

    cin >> xPosition >> yPosition;

    positions.insert(make_tuple(xPosition, yPosition));
  }

  stringstream board;

  for (int i = 1; i < boardSize + 1; i++) {
    for (int j = 1; j < boardSize + 1; j++) {
      auto first = *positions.begin();
      int x, y;
      tie(x, y) = first;

      if ((i == x) && (j == y)) {
        board << '1' << ' ';
        positions.erase(positions.begin());
      } else {
        board << '0' << ' ';
      }
    }
    board << endl;
  }

  cout << board.str();

  return 0;
}