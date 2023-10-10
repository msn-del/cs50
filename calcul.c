#include<stdio.h>
#include<cs50.h>
int N = 3;
float average(int array[]);
int main (void)
{
    int scores[];
    for( int i = 0; i < N; i++)
    {
        scores = get_int("scores: ");
    }
       printf("average:\n",average(scores));
}
float average(int array[])
{
    int sum = 0;
    for( int i = 0; i < N; i++)
    {
        sum += array[i];
    }
    return ( sum / N).
}