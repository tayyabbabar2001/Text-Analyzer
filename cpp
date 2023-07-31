#include <iostream>
using namespace std;
int main() {
  char str[100] = "the 2 Quick lazy Dog Jumped Over The 3 Fences. Are You a Dog?";

  int small_letters = 0, capital_letters = 0, digits = 0, sentences = 0, words = 1;
  
  
  for (int i = 0; i < 100; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      small_letters++;
    } else if (str[i] >= 'A' && str[i] <= 'Z') {
      capital_letters++;
    } else if (str[i] >= '0' && str[i] <= '9') {
      digits++;
    }

    if (str[i] == '.' || str[i] == '?') {
      sentences++;
      if (str[i + 1] != ' ' && i + 1 < 100) {
        words++;
      }
    } else if (str[i] == ' ') {
      words++;
    }
  }

  cout << "Number of small letters: " << small_letters << endl;
  cout << "Number of capital letters: " << capital_letters << endl;
  cout << "Number of digits: " << digits << endl;
  cout << "Number of sentences: " << sentences << endl;
  cout << "Number of words: " << words << endl;

  if (str[0] >= 'a' && str[0] <= 'z') {
    str[0] = str[0] - 32;
  }

  cout << "Reversed string: ";
  for (int i = 70; i >= 0; i--) {
    cout << str[i];
  }
  cout << endl;

  return 0;
}
