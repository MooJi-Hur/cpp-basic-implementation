/*
 * Problem: 1099 Diligent_Ant
 * URL: https://codeup.kr/problem.php?id=1099
 */

// Solution code starts here
#include <iostream>
#include <sstream>

using namespace std;

int main(void) {
  int maze[11][11];

  int startRow = 2;
  int startCulumn = 2;
  int endRow = 10;
  int endCulumn = 10;

  for (int i = 1; i < 11; i++) {
    for (int j = 1; j < 11; j++) {
      cin >> maze[i][j];
    }
  }

  for (int i = startRow; i < endRow; i++) {
    for (int j = startCulumn; j < endCulumn; j++) {
      int wall = 1;

      int current = maze[i][j];
      int right = maze[i][j + 1];
      int down = maze[i + 1][j];

      if (maze[i][j] == 2) {
        maze[i][j] = 9;
        goto MAZEOUT;
      }

      maze[i][j] = 9;

      if (right == wall) {
        startCulumn = j;
        break;
      }
    }
  }

MAZEOUT:
  stringstream mazeOut;

  for (int i = 1; i < 11; i++) {
    for (int j = 1; j < 11; j++) {
      mazeOut << maze[i][j] << ' ';
    }
    mazeOut << endl;
  }

  cout << mazeOut.str();
  return 0;
}