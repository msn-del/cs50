#include<stdio.h>
#include<cs50.h>
int main(void)
{
    string y = "yes";
    string x = "no";
    string answer = get_string("are you gay? ");
    if(answer == "yes")
    {
     answer = get_string("are you gay? ");
    }
    if(answer == "y")
    {
        printf("yes i know it");
    }
}