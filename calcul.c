#include<stdio.h>
#include<cs50.h>
#include<string.h>
int numbers[];
string names[];
(
    int n = get_int("how many contacts: ");
    for(int i = 0; i < n; i++)
    {
        names[i] = get_string("name: ");
        numbers[i] = get_int("number: ");
    }
)
int main(void)
{
    string name = get_string("wich name: ");
    printf("%i\n",number[i]);
}