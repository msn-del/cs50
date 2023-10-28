#include<stdio.h>
#include<cs50.h>
int main (void)
{
    int n = get_int("n :");
    int name[n];
    int number[n];
    for(int i = 0; i < n; i++)
    {
         name[i] = get_int("name: ");
         number[i] = get_int("number: ");
    }
}