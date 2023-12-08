#include<stdio.h>
#include<ctype.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
void contact(void);
int main (void)
{
    int n = get_int("n: ");
    string name[n];
    int number[n];
    for(int i = 0; i < n; i++)
    {
         name[i] = get_string("name: ");
         number[i] = get_int("number: ");
         contact();
    }
}
void contact(void)
{
    printf("name: %s\n" name[i]);
    printf("number: %i\n" number[i]);
}