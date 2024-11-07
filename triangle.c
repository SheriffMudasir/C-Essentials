/* area.c*/
#include <stdio.h>

int area(int a, int b){
 int area;
 area = (a * b) / 2;
 return area;
}
int main()
{
 int b, h, a;
 printf("Base: ");
 fflush(stdout);
 scanf("%d", &b);
 printf("Height: ");
 fflush(stdout);
 scanf("%d", &h);
 a =  area(b, h);
 printf("The area is %d\n", a);

 return 0;

 
}
