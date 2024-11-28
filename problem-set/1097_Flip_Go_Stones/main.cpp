/*
 * Problem: 1097 Flip_Go_Stones
 * URL: https://codeup.kr/problem.php?id=1097
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>
#include <set>
#include <sstream>
#include <tuple>

using namespace std;

int main(void) {
  const int boardSize = 19;
  bool board[boardSize + 1][boardSize + 1];

  int crossCounter = 0;

  for (int i = 1; i < boardSize + 1; i++) {
    for (int j = 1; j < boardSize + 1; j++) {
      cin >> board[i][j];
    }
  }

  cin >> crossCounter;

  multiset<int> rows;
  multiset<int> columns;

  for (int i = 0; i < crossCounter; i++) {
    int row;
    int column;

    cin >> row >> column;

    rows.insert(row);
    columns.insert(column);
  }

  for (int i = 1; i < boardSize + 1; i++) {
    for (int j = 1; j < boardSize + 1; j++) {
      auto itRows = rows.count(i);

      if (itRows % 2 == 1) {
        board[i][j] = !board[i][j];
      }

      auto itColumns = columns.count(j);
      if (itColumns % 2 == 1) {
        board[i][j] = !board[i][j];
      }
    }
  }

  stringstream resultBoard;

  for (int i = 1; i < boardSize + 1; i++) {
    for (int j = 1; j < boardSize + 1; j++) {
      resultBoard << board[i][j] << ' ';
    }
    resultBoard << endl;
  }

  cout << resultBoard.str();

  return 0;
}