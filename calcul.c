#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
  int number = 1;
  int numbers[number + 2];
  while(true)
    {
         int n = get_int("number: ");
         for(int i = 0; i < 10; i++)
               {
                     if (numbers[i] == n)
        {
            printf("found\n");
            return 0;
        }
    }
    printf("not found\n");
    return 1;
    }
}