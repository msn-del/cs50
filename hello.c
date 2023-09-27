#include<stdio.h>
#include<cs50.h>
int main(void){
     char c = get_char("are you ok? ");
     if (c == 'y')
     {
          printf("that's what i want\n");
     }
     else if (c == 'n')
     {
          printf("what's the problem?\n");
     }
}
