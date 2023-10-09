#include<stdio.h>
#include<cs50.h>

float average(int array[]);

int main (void)
{
    int N = get_int("nuber of ints: ");
    int scores[N];
    for( int i = 0; i < N; i++)
    {
        scores[i] = get_int("score: ");
    }
    printf("average: %f\n", average(scores));

float average(int array[])
{
        int sum = 0;
    for(int i = 0; i < N; i++)
        {
           sum += array[i];
        }
    return sum / (float) N;
}
}