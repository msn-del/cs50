#include<stdio.h>
#include<ctype.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int array[6] = {5, 16, 12, 17, 18};
    for(int i = 0; i < 6; i++)
    {
        if(array[i] % 2 == 0)
        {
            printf("%i\n", array[i]);
        }
    }
    return 0;
}