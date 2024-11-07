/* struct.c */

#include <stdio.h>
#include <string.h>
struct person {
    char title[8];
    char lastname[32];
    int age;
};

int main()
{
    struct person sheriff;
    strncpy(sheriff.title, "doctor", 7);
    strncpy(sheriff.lastname, "Sheriff", 31);
    sheriff.age = 38;


    printf("%s %s of the age %d\n",
    sheriff.title,
    sheriff.lastname,
    sheriff.age);

    return 0;
}

