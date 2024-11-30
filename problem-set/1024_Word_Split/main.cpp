/*
 * Problem: 1024 Word_Split
 * URL: https://codeup.kr/problem.php?id=1024
 */

// Solution code starts here

#include <iostream>
#include <string>

using namespace std;

int main(void) {
  string inputWord;

  cin >> inputWord;

  int charCounter = 0;

  while (charCounter < inputWord.size()) {
    cout << "'" << inputWord[charCounter] << "'" << endl;

    charCounter++;
  }
  return 0;
}