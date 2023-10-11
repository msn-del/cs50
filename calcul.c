#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main (int argc, string argv[])
{
    if(argc != 3 )
    {
        printf("error\n");
    }
    else
    {
        printf("hello, %s %s\n", argv[1], argv[2] );
    }
}