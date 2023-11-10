#include<stdio.h>
#include<ctype.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int x;
    int array[5] = {5, 16, 12, 17, 18};
    for(int i = 0; i < 5; i++)
    {
        if(array[i] / 2 == x )
        {
            printf("%i\n", array[i]);
        }
    }
}