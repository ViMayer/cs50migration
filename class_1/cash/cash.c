#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float value;

    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int quarter_count = 0;
    int dime_count = 0;
    int nickel_count = 0;
    int penny_count = 0;
    int coins = 0;
    int owed;


    int input_valid = 0;
    while(!input_valid) {
        value = get_float(" Dollar amount: ");
        owed = round(value * 100);
        input_valid = value > 0.009;
    }

    do {

        // printf(" Cents owed: %d \n", owed);

        while(owed-quarter >=0){

            owed -= 25;
            quarter_count++;
            coins++;

        }
        while(owed-dime >=0){

            owed -= 10;
            dime_count++;
            coins++;

        }
        while(owed-nickel >=0){

            owed -= 5;
            nickel_count++;
            coins++;

        }
        while(owed-penny >=0){
            penny_count++;
            owed -= 1;
            coins++;
        }

        // COMPLETE ANSWER
        // printf(" Quarters: %d\n Dimes: %d\n Nickels: %d\n Pennies: %d\n Total amount of coins: %d\n", quarter_count, dime_count, nickel_count, penny_count, coins);

        // ANSWER FOR AUTOMATIC TESTING
        printf("%d\n",coins);

    }


    while ( owed != 0 );

}
