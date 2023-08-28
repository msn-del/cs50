#include<stdio.h>
#include<cs50.h>
int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");
    char answer = get_char("which, symbole");
    if(answer == '+')
    {
        int result = x + y;
        printf("%i\n", result);
    }
}