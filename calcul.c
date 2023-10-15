#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    int i = 0;
    int n = get_int("how many contacts: ");
    string names[n];
    int number[n];
    for(i; i < n; i++)
    {
        names[i] = get_string("name: ");
        number[i] = get_int("number: ");
    }
        string name = get_string("wich name: ");
        for(i; i < 1; i++)
            {printf("%i\n",number[i]);}

}