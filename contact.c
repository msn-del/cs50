#include<cs50.h>
#include<string.h>
int main (void)
{
    int n = get_int("n: ");
    string name[n];
    int number[n];
    for(int i = 0; i < n; i++)
    {
         name[i] = get_string("name: ");
         number[i] = get_int("number: ");
    }
}