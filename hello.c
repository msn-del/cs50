#include<stdio.h>
#include<cs50.h>
int main(void){
     int x = get_int("what's the value of x?");
     char s = get_char("which symbole?");
     int y = get_int("what's the value of y?");
     int result = x + y;
          if (s == '+')
          {
               printf(",%i result\n");

}