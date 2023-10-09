#include<stdio.h>
#include<cs50.h>
int opperation(int array[]);
int main (void)
{
    int a = get_int("number of ints: ");
    int x[a];
    for( int i = 0; i < a; i++)
    {
        x[i] = get_int("x =");
    }
    char y = get_char("which symbole: ");
    printf("opperation: %i\n", opperation(x));
    int opperation(int array[]);
    int z = 0;
    for(int i = 0; i < a; i++)
    {
        z += array[i];
    }
    return z;
}