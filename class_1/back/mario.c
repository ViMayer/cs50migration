#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int h;
    int x = 0;
    int c = 6;

    int input_valid = 0;
    while(!input_valid) {
        h = get_int("size: ");
        input_valid = h >= 1 && h <= 8;
    }
    do {
        int d ;
            for( d=0; d <= c; d++) {
                printf(" ");

            }
        int i;
            for( i=0; i <= x; i++) {
                printf("#");
            }
            if(x<h){
                printf("  ");
            }
        int r;
            for( r=0; r <= x; r++) {
                printf("#");
            }
        c--;
        x++;
        printf("\n");
    }
    while ( x < h );

}
