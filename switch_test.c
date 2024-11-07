#include <stdio.h>

int main(){
    int x;
    printf("Enter 1: apple, 2: orange, 3: tomato\n");
    scanf("%d", &x);
    switch(x)
    {
        case 1:
            printf("Apple\n");
            break;
        case 2:
            printf("Orange\n");
            break;
        case 3:
            printf("Tomato\n");
            break;
        default:
            printf("Enter a valid option\n");
    }
}
