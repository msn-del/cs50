#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    string **y = "yes";
    string **n = "no";
    string **answer = get_string("are you gay? ");
    while(**answer == **y)
    {
     **answer = get_string("are you gay? ");
    }
    if(**answer == **n)
    {
        printf("yes i know it");
    }
}