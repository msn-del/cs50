#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    int n = get_int("how many contacts: ");
    string names[n];
    int number[n];
    for (int i = 0;i < n; i++)
    {
             names[n] = get_string("name: ");
             number[n] = get_int("number: ");
    }
     string name = get_string("which name: ");
             if(strcmp(names[i],name) == 0)
             {
                printf("%i\n",number[i]);
             }
}