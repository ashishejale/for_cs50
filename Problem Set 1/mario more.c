#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Please enter a number between 1 and 8 : ");
    }
    while (n < 1 || n > 8);
    for (int i = 0; i < n; i++)
    {
        for (int k = i; k < n - 1; k++)  // to print space
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)  // to print #
        {
            printf("#");
        }
        printf("  ");  // to print gap 
        for (int l = 0; l <= i; l++)  // to print other #
        {
            printf("#");
        }
        printf("\n");
    }

}

