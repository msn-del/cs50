#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string names[];
    int number[];
    int n = get_int("how many contacts: ");
    for(int i = 0; i < n; i++)
    {
        names[i] = get_string("name: ");
        number[i] = get_int("number: ");
    }
    string name = get_string("wich name: ");
    for(int i = 0; i < n; i++)
    {
        printf("%i\n",number[i]);
    }
}