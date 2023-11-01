#include<stdio.h>
#include<cs50.h>

int valeur();
void ligne(int size);

int main (void)
{
    int n = valeur();
    ligne(n);
}

int valeur (void)
{
    int n;
    do
    {
        n = get_int("size: ");
    }
    while(n < 1);
}

void ligne (int size)
{
    for( int i = 0; i < n; i++)
    {
         for( int j = 0; j < n; j++)
         {
            printf("#");
         }
         printf("\n")
    }
}