#include<stdio.h>
#include<cs50.h>
int main(void){
     while (true)
     {
     int x = get_int("x =");
     char s = get_char("which symbole?");
     int y = get_int("y =");
     int result = x + y || x - y || x * y || x / y;
          if (s == '+')
          {
               printf("%i\n",result);
          }
          if (s == '-')
          {
               printf("%i\n",result);
          }
          if (s == '*')
          {
               printf("%i\n",result);
          }
          if (s == '/')
          {
               printf("%i\n",result);
          }
     }

}