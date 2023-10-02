#include<stdio.h>
#include<cs50.h>
int main(void){
     while (true)
     {
     int x = get_int("x =");
     char s = get_int("symbole =");;
     int y = get_int("y =");;
     int result1;
     int result2;
     int result3;
     int result4;
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