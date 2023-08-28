#include <stdio.h>
#include <cs50.h>
int main(void){
    char c= get_char("do you agree?");
    if( c == 'y' || c == 'Y')
    {
        printf("hello\n");
    }
    else if( c == 's' || c == 'S')
    {
        printf("good bye\n");
    }
}