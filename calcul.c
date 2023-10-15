#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    int n = get_int("how many contacts: ");
    string names[n];
    int number[n];
    for(int s = 0; s < n; s++)
    {
        names[s] = get_string("name: ");
        number[s] = get_int("number: ");
    }
    string name = get_string("wich name: ");
    for(int i = 0; i < n; i++)
    {
        printf("%i\n",number[i]);
    }
}