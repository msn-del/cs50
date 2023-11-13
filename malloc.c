#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<cs50.h>
int main(void)
{
    string n = get_string("n :");
    string num = malloc(strlen(n) + 1 );
    for(int i = 0; i <= strlen(n); i++)
    {
        num[0] = n[0];

    if(strlen(num) > 0)
    {
        num[0] = toupper[0]
    }
    }
    printf("s: \n", n);
    printf("num: \n", num);
}