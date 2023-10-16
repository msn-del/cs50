#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    int n = get_int("how many contacts: ");
    string names[n];
    int numbers[n];
    for (int i = 0;i < n; i++)
    {
      {
         names[i] = get_string("name: ");
         numbers[i] = get_int("number: ");
      }
      string name = get_string("which name: ");
             if(strcmp(names[i],name) == 0)
             {
                printf("%d\n",numbers[i]);
             }
  }
}