#include<stdio.h>
#include<cs50.h>
float average(float array[]);
const int N = 3;
int main (void)
{
    int scores[N];
    for( int i = 0; i < N; i++)
    {
        scores[i] = get_int("score: ");
    }
    printf("average: %f\n", average(scores));
}
float average(float array[]);
{
        int sum = 0;
    for(int i = 0; i < N; i++)
        {
           sum += array[i];
        }
    return sum / (float) N;
}