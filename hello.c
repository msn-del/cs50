#include <stdio.h>
#include <cs50.h>
int main(void){
    int i = 1;
while(i < 16)
{
    int num1 = get_int("num1: ");
    int num2 = get_int("num2: ");
    int result = num1 + num2;
    printf("%i\n", result );
    i += 2;
}
}
