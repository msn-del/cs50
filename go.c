#include<stdio.h>
#include<cs50.h>
int main(void)
{
    string y = "yes";
    string x = "no";
    string answer;
    do
    {
     answer = get_string("are you gay? ");
    }
    while(answer == x);

    if(answer == y)
    {
        printf("yes i know it");
    }
}