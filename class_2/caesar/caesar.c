#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // CHECK IF ALL ARGUMENTS ARE VALID
    if(argv[1] == 0 || argc > 2 ){
        printf("Problem in declaration of arguments!\n");
        return 1;
    }
    int j = strlen(argv[1]);
    for(int i = 0; i < j; i++){
        char t = argv[1][i];
        if(t < 48 || t > 57){
            printf("Only numeric values are accepted in the arguments!\n");
            return 1;
        }
    }
    int key = atoi((argv[1]));
    if ( key <= 0) {
        return 1;
    }

    string s = get_string("Input: ");
    int n = strlen(s);
        printf("ciphertext: ");
        for(int i = 0; i < n; i++)
         {
            char c = s[i];
            // MAKES NEW KEY (REMOVES UNNECESSARY LOOPS IN THE ALPHABET)
            while(key>26){
                key = key - 26;
            }


            int cipher = c + key;

            // ONLY SMALL LETTERS
            if ( c >= 97 && c <= 122){
                cipher = c + key;
                if(cipher > 122){
                    cipher = cipher - 122 + 96;
                }
                printf("%c", cipher);
            // ONLY BIG LETTERS
            } else if ( c >= 65 && c <= 90 ) {
                cipher = c + key;
                if(cipher > 90){
                    cipher = cipher - 90 + 64;
                }
                printf("%c", cipher);
            // IF NOT BIG OR SMALL JUST PRINT THEM WITHOUT CHANGES
            } else {
                printf("%c", c);
            }
        }
        printf("\n");
}
