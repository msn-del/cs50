#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    int numbers[7] = {0, 5, 51, 15, 14, 12, 88};
    int n = get_int("number: ");
    for(int i = 0; i < 7; i++)
    {
        if(numbers[i] == n)
        {
            printf("found\n");
            return 0;
        }
        else
        {
            printf("404\n");
        }
        return 1;
    }
}