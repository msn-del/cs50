#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    int sum = 2;
  int numbers[sum + 2];
  int n = get_int("number: ");
  for(int i = 0; i < 10; i++)
  {
    sum += numbers[i];
    if (numbers[i] == n)
    {
       printf("found\n");
         return 0;
    }
     printf("not found\n");
    return 1;
  }

}