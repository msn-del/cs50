#include<stdio.h>
#include<cs50.h>
int n = 4;
float average(int array[]);

int main (void)
{
    int scores[n];
    for ( int i = 0; i < n; i++)
    {
        scores[i] = get_int("score: ");
    }
    printf("%f\n", average(scores));
}

float average(int array[])
{
    int sum = 0;
    for( int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return sum / (float)n;
}