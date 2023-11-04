#include<stdio.h>
#include<cs50.h>

int main(void)
{
    string yes;
    string no;
    string answer;
    do
    {
        answer = get_string("are you gay? ");
    }
    while(answer == "yes");
    if(answer == "no")
    {
        printf("yes i know it");
    }
}