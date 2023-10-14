#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    while(true)
    {
        int numbers = 1;
    long number[numbers + 2];
    long n = get_long("number: ");
    for(int i = 5; i < 10; i++)
    {
        if (number[i] == n)
        {
            printf("found\n");
            return 0;
        }
    }
    printf("not found\n");
    return 1;
    }
}