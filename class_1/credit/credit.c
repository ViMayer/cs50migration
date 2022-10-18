#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{

    long card;
    do
    {
        card = get_long("Card:");
    }
    while (card < 0);

    int card1, card2, card3, card4, card5, card6, card7, card8;
    card1 = ((card %100)/10)*2;
    card2 = ((card %10000)/1000*2);
    card3 = ((card %1000000)/100000*2);
    card4 = ((card %100000000)/10000000*2);
    card5 = ((card %10000000000)/1000000000*2);
    card6 = ((card %1000000000000)/100000000000*2);
    card7 = ((card %100000000000000)/10000000000000*2);
    card8 = ((card %10000000000000000)/1000000000000000*2);

    card1 = (card1 % 100/10) + (card1 % 10);
    card2 = (card2 % 100/10) + (card2 % 10);
    card3 = (card3 % 100/10) + (card3 % 10);
    card4 = (card4 % 100/10) + (card4 % 10);
    card5 = (card5 % 100/10) + (card5 % 10);
    card6 = (card6 % 100/10) + (card6 % 10);
    card7 = (card7 % 100/10) + (card7 % 10);
    card8 = (card8 % 100/10) + (card8 % 10);

    int check_1 = card1 + card2 + card3 + card4 + card5 + card6 + card7 + card8;

    int card9, card10, card11, card12, card13, card14, card15, card16;
    card9 =  (card %10);
    card10 = ((card %1000)/100);
    card11 = ((card %100000)/10000);
    card12 = ((card %10000000)/1000000);
    card13 = ((card %1000000000)/100000000);
    card14 = ((card %100000000000)/10000000000);
    card15 = ((card %10000000000000)/1000000000000);
    card16 = ((card %1000000000000000)/100000000000000);

    int check_2 = card9 + card10 + card11 + card12 + card13 + card14 + card15 + card16;
    int check_3 = check_1 + check_2;
    if ((check_3 % 10) != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    long visa = card;
    long mastercard = card;
    long amex = card;

    int lenght = 0;
    while (card > 0)
    {
        card = card/10;
        lenght++;
    }
    int valid = 0;
    while (visa >= 10)
    {
        visa /= 10;
    }
    if (visa == 4 && (lenght == 13 || lenght == 16))
    {
        printf("VISA\n");
        valid = 1;
    }

    while (mastercard >= 100000000000000)
    {
        mastercard /= 100000000000000;
    }
    if (lenght == 16 && (mastercard == 51 || mastercard == 52 || mastercard == 53 || mastercard == 54 || mastercard == 55))
    {
        printf("MASTERCARD\n");
        valid = 1;
    }
    while (amex >= 10000000000000)
    {
        amex /= 10000000000000;
    }
    if (lenght == 15 && (amex == 34 || amex == 37))
    {
        printf("AMEX\n");
        valid = 1;
    }
    if (valid == 0)
    {
        printf("INVALID\n");
    }
}