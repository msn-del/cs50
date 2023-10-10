#include<stdio.h>
#include<cs50.h>
int N = 3;
int opperation(int array[]);
int main (void)
{
        int x[N];
    for( int i = 0; i < N; i++)
    {
       x[i] = get_int("scores: ");
    }
       printf("opperation: %i\n",opperation(x));
}
   int opperation(int array[])
{
    while(true)
    {
        int sum = 1;
    char y = get_char("symbole: ");
    if(y == '+')
    {
      for( int i = 0; i < N; i++)
        {
            sum += array[i] -1;
        }
    }
    if(y == '-')
    {
      for( int i = 0; i < N; i++)
        {
             sum -= array[i] ;
        }
    }

    if(y == '*')
    {
      for( int i = 0; i < N; i++)
        {
            sum *= array[i];
        }
    }

    if(y == '/')
    {
      for( int i = 0; i < N; i++)
        {
         array[i] /= sum;
        }
    }
    return ( sum );
    }
}