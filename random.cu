/* random.c */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int our_random_function(int max)
{
 int x;
 x = rand() % max + 1;
 return x;
}

int main()
{
 srand(getpid());
 int random;

 random =  our_random_function(5);
 printf("The random: %d\n", random);

 return 0;
}
