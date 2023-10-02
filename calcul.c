#include<stdio.h>
#include<cs50.h>
int main(void){
     while (true)
     {
     int x = get_int("x =");
     char s = get_int("symbole =");;
     int y = get_int("y =");;
     int result1 = x + y;
     int result2 = x - y;
     int result3 = x * y;
     int result4 = x / y;
          do
          {
               printf("%i\n",result1);
          }
          while(s == '+');
          do
          {
               printf("%i\n",result2);
          }
          while(s == '-');
          do
          {
               printf("%i\n",result3);
          }
          while(s == '*');
          do
          {
               printf("%i\n",result4);
          }
          while(s == '/');
     }

}