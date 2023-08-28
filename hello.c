#include <stdio.h>
#include <cs50.h>
int main(void){
    int num1 = get_int ("num1: ");
    int  num2 = get_int ("num2: ");
    if(num1 < num2)
    {
     printf("num1 is less than num2 \n");
    }
    if(num1 > num2)
    {
     printf("num1 is big than num2 \n");
    }
    if(num1 == num2)
    {
     printf("num1 equal num2 \n");
    }
}