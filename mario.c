#include<stdio.h>
#include<cs50.h>

int get_n();
void print_grind(int size);

int main (void)
{
    int n = get_n();
    print_grind(n);
}

int get_n(void)
{
    int n;
    do
    {
        n = get_int("size: ");
    }
    while(n < 1);
    return n;
}

void print_grind(int n)
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