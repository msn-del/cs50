#include <stdio.h>
#include <cs50.h>
int main (void)
{
    while (true)
    {
    int n = get_int ("size:");
    while(n < 1)
    {
         n = get_int ("size:");
    }
    for( int i = 0; i < n; i++)
    {
     printf("#");
     for( int j = 0; j < n; j++)
    {
     printf("#");
    }
    printf("#\n");
    }
}