/*we will write a program that generate random number and ask the player to guess
it If the player's guess it higher than the actual number,the program displays "lower number please"
similarly If the users guess is to low, the program prints "higher number please".
when user guess the correct number the program display number of guesses player use to arrived
that number.
*/
//---------------- program Start Here-----------------------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number;                // for random number
    int s, i=1;                  // players guess and number of guess
    srand(time(0));            // at every time program runs it generate different number
    number = rand() % 100 + 1; // generating randonm number between 1 and 100
  
    // actual logic of program
    do
    {
        printf("enter your guess:");
        scanf("%d", &s);
        if (s>number)
        {
            printf("lower number please! \n");
        }

        else if(s<number)
        {
            printf("higher number please! \n");
        }
        else
        {
            printf("you guess it in %d attempts \n",i);
        }
        i++;
    } while (s!= number) ;
    return 0;
}