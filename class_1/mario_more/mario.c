#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int height;
    int i = 0;
    int input_valid = 0;
    while(!input_valid) {
        height = get_int("Size: ");
        input_valid = height >= 1 && height <= 8;
    }
    int dots = height - 1;
    do {
       int hashes = 0;
       int x = 0;
       i++;
       while(hashes < i){
           while(x<dots){
               printf(" ");
               x++;
           }
           printf("#");
           hashes++;
       }
       printf("  ");
       hashes = 0;
       while(hashes < i){
           printf("#");
           hashes++;
       }

       printf("\n");
       dots--;
    }
    while ( i < height);

}
