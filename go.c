#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
string answer;
int main(void)
{
    string question1 = "yes";
    string question2 = "no";
    answer = get_string("are you gay? ");
    do
    {
       answer = get_string("are you gay? ");
    }
    while(strcmp(answer, question2) == 0);

    if(strcmp(answer, question1) == 0)
    {
        printf("yes i know it hhhh\n");
    }
}