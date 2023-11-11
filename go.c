#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
char *answer;
int main(void)
{
    string question1 = "yes";
    string question2 = "no";
        answer = get_string("are you gay? ");

    if(strcmp(answer, question1) == 0)
    {
        printf("yes i know it hhhh\n");
    }
    else
    {
        answer = get_string("are you gay? ");
    }
}