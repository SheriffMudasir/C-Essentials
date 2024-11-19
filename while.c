/* while.c */

#include <stdio.h>
#include <stdlib.h>
int main()
{
 int a;
 while (a == 0)
 {
   printf("Do you want to continue\n");
   scanf("%d", &a);
 }
 if (a == 1)
 {
	 exit(0);
 }
 return 0;
}
