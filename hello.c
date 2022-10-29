#include <stdio.h>
#include <cs50.h>
int main(void)
{
    printf("hello, world\n");
    char name[50];
    printf("Enter your name: \n"); // this is a comment
    scanf("%s", name);
    printf("hello, %s\n", name);
// back to the start
return 0;
}