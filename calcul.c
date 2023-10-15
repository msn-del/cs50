#include<stdio.h>
#include<cs50.h>
#include<string.h>
int numbers[];
string names[];
int main(void)
{
    int n = get_int("how many contacts: ");
    for(int i = 0; i < n; i++)
    {
        names[n] = get_string("name: ");
        numbers[n] = get_int("number: ");
    }
    string name = get_string("wich name: ");
    for(int i = 0; i < n; i++)
    {
        printf("%i\n",numbers[i]);
    }
}