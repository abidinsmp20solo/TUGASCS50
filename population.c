#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n;
    do
    {
        n= get_int("Start size: ");
    }
    while (n < 9);
    // TODO: Prompt for end size
    int j;
    do
    {
        j = get_int("End size: ");
    }
    while (j < n);
    // TODO: Calculate number of years until we reach threshold
    
        n = n + (n / 3) - (n / 4);
    
    // TODO: Print number of years
    printf("Years; %i\n", n);
}

