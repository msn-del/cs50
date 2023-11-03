#include<stdio.h>
#include<cs50.h>

int main (void)
{
    int n = get_int("n: ");
    int scores[n];
    for( int i = 0; i < n; i++)
    {
        int scores[i] = get_int("score: ");
    }
    printf("%f\n", scores[n] / (float) 3);
}