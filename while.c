/* while.c */

#include <stdio.h>
int main()
{
 int a;
 while (a == 0)
 {
   printf("Do you want to continue\n");
   scanf("%d", &a);
 }
 return 0;
}
