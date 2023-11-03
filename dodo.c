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
    do
    {
        int n = get_int("n: ");
        return n;
    }
    while(n < 0);
}