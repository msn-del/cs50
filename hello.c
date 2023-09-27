#include<stdio.h>
#include<cs50.h>
int main(void){
     string answer = get_string("are you ok? ");
     if ( answer == 'yes')
     {
          printf("that's what i want\n");
     }
     else if ( answer == 'no' )
     {
          printf("what's the problem?\n");
     }
}
