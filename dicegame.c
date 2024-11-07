/* dicegame.c */

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int gen_random(int max)
{
 int x;
 /* generate a random number between 1 and max */
 x = rand() % max + 1;
 return x;
}

int main()
{
 int balance;
 int bet;
 int guess, dice;
 /*Seeding the random number for randomness */
 srand(getpid());
 balance = 1000;
 while(1)
 {
  printf("Place a bet or press 0 to quit: ");
  fflush(stdout);
  scanf("%d", &bet);
  if (bet == 0)
   return 0;
  printf("Guess a number (1 - 6) or 0 to quit: ");
  fflush(stdout);
  scanf("%d", &guess);
  /* press 0 to quit the game */
  if (guess == 0)
   return 0;
  printf("Throwing the dice...");
  sleep(2);
  dice = gen_random(6);
  printf("Dice: %d\n", dice);
  if (guess != dice)
  {
    balance -= bet;
    printf("You lost!\n");
  }
  else
  {
    bet *=3;
    balance += bet;
    printf("You win!\n");
   }
  if (balance == 0)
  {
    printf("Balance: %d\n", balance);
    printf("GAME OVER!\n");
    return 0;
   }
 printf("Balance: %d\n", balance);
 }
 return 0;
}
