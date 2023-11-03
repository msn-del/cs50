#include<stdio.h>
#include<cs50.h>

int get_negative(void);

int main (void)
{
    int i = get_negative();
    printf("%i\n", i);
}
int get_negative(void)
{
    int n;
    do
    {
        n = get_int("n: ");
        return n;
    }
    while(n < 0);
}