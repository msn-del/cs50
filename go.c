#include<stdio.h>
#include<cs50.h>
int main(void)
{
    char y = yes';
    char x = 'no';
    string answer = get_string("are you gay? ");
    if(answer == 'x')
    {
     answer = get_string("are you gay? ");
    }
    if(answer == 'y')
    {
        printf("yes i know it");
    }
}