#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string y = "yes";
    string n = "no";
    string answer;
    do
    {
        answer = get_string("are you gay? ");
    }
    while(answer == y);
    if(answer == n)
    {
        printf("yes i know it");
    }
}