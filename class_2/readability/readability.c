#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
  string s = get_string("Input:");
  int n = strlen(s);
  double characters = 0;
  double sentences = 0;
  double words = 1;

  for (int i = 0; i < n; i++) {

    if (isalpha(s[i])) {
      characters++;
    } else if (s[i] == ' ') {
      words++;
    } else if (s[i] == '!' || s[i] == '?' || s[i] == '.') {
      sentences++;
    }
  }

  double L = (characters * 100) / words;
  double S = (sentences * 100) / words;
  double index = (0.0588 * L) - (0.296 * S) - 15.8;
  int grade = round(index);
  if (grade < 1) {
    printf("Before Grade 1\n");
  } else if (grade > 16) {
    printf("Grade 16+\n");
  } else {
    printf("Grade %d\n", grade);
  }

  // Debugger
  //   printf("()=========} Debugger {=========()\n");
  //   printf("-------------------------\n");
  //   printf("Input: %s\n", s);
  //   printf("-------------------------\n");
  //   printf("L: %f\nS: %f\nIndex: %f\nGrade: %d\n", L, S, index, grade);
  //   printf("sentences: %f\nwords: %f\nletters: %f\n", sentences, words ,characters);
  //   printf("-------------------------\n");
  //   printf("()==============================()\n");

}