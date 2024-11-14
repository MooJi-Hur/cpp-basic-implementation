/*
 * Problem: 1022 Sentence_Output
 * URL: https://codeup.kr/problem.php?id=1022
 * Description: [Add description here if needed]
 */

// Solution code starts here
#include <iostream>
#include <string>

using namespace std;

int main(void) {
  string scanedSentence;  // 동적 크기

  getline(cin, scanedSentence);  // getline은 cin으로부터 한 줄을 입력받음
  cout << scanedSentence << endl;
  return 0;
}