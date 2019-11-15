#include <stdio.h>
#include <cs50.h>
#include <math.h>

//Displays minimum no. of coins to be returned
int main(void)
{
    float dollar;
    
    //Accepts the correct change to be returned
    do
    {
        dollar = get_float("CHANGE OWED: ");
    }
    while (dollar < 0);
    int cents = round(dollar * 100);
    int coins = 0;
    
    //Finds the minimum no. of coins
    while (cents != 0)
    {
        if (cents >= 25)
        {
            cents -= 25;
            coins++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            coins++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            coins++;
        }
        else
        {
            cents -= 1;
            coins++;
        }
    }
    
    //Displays the minimum
    printf("MINIMUM NO. OF COINS TO BE RETURNED: %i\n", coins);    
}
