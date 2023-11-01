#include<stdio.h>
#include<cs50.h>

int valeur();
void output(int n);

int main (void)
{
    int n = valeur();
    output(n);
}

int valeur(void)
{
    int n;
    do
    {
        n = get_int("size: ");
    }
    while(n < 1);
    return n;
}

void output(int n)
{
    for( int i = 0; i < n; i++)
    {
         for( int j = 0; j < n; j++)
         {
            printf("#");
         }
         printf("\n");
    }
}