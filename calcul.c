#include<stdio.h>
#include<cs50.h>
string names[];
int numbers[];
int main (void)
{
    int n = get_int("how many contacts: ");
    for(int i = 0; i < n; i++)
    {
        names[i] = get_string("name: ");
        numbers[i] = get_int("number: ");
    }
}