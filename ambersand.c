#include <stdio.h>

void addition(int *target, int x, int y)
{
    *target = x + y;
    return;
}

int main()
{
    int x, y , answer;


    x=5;
    y=10;


    addition(&answer, x, y);
    printf("Equal to: %d\n", answer);
}
