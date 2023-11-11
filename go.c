#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
char *answer;
int main(void)
{
    char *question1 = "yes";
    char *question2 = "no";
    do
    {
        answer = get_string("are you gay? ");
    }
    while(*answer == *question2);

    else(*answer == *question1)
    {
        printf("yes i know it hhhh\n");
    }
}