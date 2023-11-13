#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<cs50.h>
int main(void)
{
    char *n = get_string("n :");
    char *num = malloc(strlen(n) + 1 );
    for(int i = 0; i < strlen(n) + 1; i++)
    {
        num[i] = n[i];
    }

    if(strlen(num) > 0)
    {
        num[0] = toupper(num[0]);
    }
    printf("n: %s\n", n);
    printf("num: %s\n", num);
}