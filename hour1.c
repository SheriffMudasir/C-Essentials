/* ourKKK1.c */
#include <stdio.h>

int main( )
{
 int speed; 
 printf("How fast are you driving\n");
 scanf("%d", &speed);

 if (speed > 100){
 printf("You are driving fast\n");
 }else
 {
   printf("Your driving is ok\n");
 }
 return 0;
}
