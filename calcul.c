#include<stdio.h>
#include<cs50.h>
int main (void)
     {
          while (true)
          {
          int x = get_int("opperation =");
          char s = get_char("symbole:");
          int y = get_int("y =");
            if (s == '+')
          {
               printf("%i\n",x + y);
          }
            if (s == '-')
          {
               printf("%i\n",x - y);
          }
            if (s == '*')
          {
               printf("%i\n",x * y);
          }
             if (s == '/')
          {
               printf("%i\n",x / y);
          }


          }

}