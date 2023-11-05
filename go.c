#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string y = "yes";
    string n = "no";
    string answer = get_string("are you gay? ");
    while(answer == "no")
    {
     answer = get_string("are you gay? ");
    }
    if(answer == "yes")
    {
        printf("yes i know it");
    }
}