#include <stdio.h>
#include <cs50.h>
int main (void)
{
    int n = 5;
    for( int i = 0; i < 5; i++)
    {
     printf("#");
     for( int j = 0; j < 5; j++)
    {
     printf("#");
    }
    printf("#\n");
    }
}