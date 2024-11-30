/*
 * Problem: 1069 Grade_Output
 * URL: https://codeup.kr/problem.php?id=1069
 */

// Solution code starts here
#include <iostream>

using namespace std;

int main(void) {
  char grade;
  string words;

  cin >> grade;

  switch (grade) {
    case 'A':
      words = "best!!!";
      break;
    case 'B':
      words = "good!!";
      break;
    case 'C':
      words = "run!";
      break;
    case 'D':
      words = "slowly~";
      break;
    default:
      words = "what?";
      break;
  }

  cout << words << endl;

  return 0;
}