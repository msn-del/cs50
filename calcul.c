#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    int n = get_int("how many contacts: ");
    string names[n];
    int numbers[n];
    for (int i = 0;i < 4; i++)
    {
      while(i < n)
      {
         names[n] = get_string("name: ");
         int number[n] = get_int("number: ");
      }
      string name = get string("which name: ")
             if(strcmp(names[i],name) == 0)
             {
                printf("%s\n",numbers[i]);
             }
  }
}