#include<stdio.h>
#include<cs50.h>
int main (void)
{
 while (true)
          {
    int z = get_int("number of ints =");
    int x;
               for( int i = 0; i < z; i++)
               {
     x = get_int("x =");
               }
               char s = get_char("symbole :");
           for( int i = 0; i < z; i++)
           {
               if (s == '+')
          {
              z ;printf("%i",x);
          }
            if (s == '-')
          {
               printf("%i\n",x);
          }
            if (s == '*')
          {
               printf("%i\n",x);
          }
             if (s == '/')
          {
               printf("%i\n",x);
          }

          }

           }
}