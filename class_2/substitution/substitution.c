#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]) {
  if (argc != 2) {
    printf("Usage: ./substitution KEY\n");
    return 1;
  }
  string key = argv[1];
  int k = strlen(key);
  for (int i = 0; i < k; i++) {
    key[i] = toupper(key[i]);
  }

  if (k != 26) {
    printf("Key must contain 26 characters.\n");
    return 1;
  }

  for (int i = 0; i < k; i++) {
    for (int j = i + 1; j < k; j++) {
      if (toupper(key[i]) == toupper(key[j])) {
        printf("Key must not contain repeated characters.\n");
        return 1;
      }
    }
  }

  for (int i = 0; i < k; i++) {
    if (key[i] < 65 || key[i] > 122 || (key[i] > 90 && key[i] < 97)) {
      printf("Key must only contain alphabetic characters.\n");
      return 1;
    }
  }

  string alfa = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string plaintext = get_string("Text:");
  int pl = strlen(plaintext);

  int cypher[pl];
  for (int i = 0; i < k; i++) {

    for (int j = 0; j < pl; j++) {

      if (plaintext[j] == alfa[i]) {
        cypher[j] = key[i];

      } else if (plaintext[j] == alfa[i] + 32) {
        cypher[j] = key[i] + 32;
      } else if (plaintext[j] <= 64 || (plaintext[j] >= 91 && plaintext[j] <= 96) || plaintext[j] >= 123) {
        cypher[j] = plaintext[j];
      }

    }
  }
  printf("ciphertext: \n");
  for (int i = 0; i < pl; i++) {
    printf("%c", cypher[i]);
  }
  printf("\n");

}