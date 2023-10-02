while (true)
     {
     int x = get_int("x =");
     char s = get_char("which symbole?");
     int y = get_int("y =");
     int result1 = x + y;
     int result2 = x - y;
     int result3 = x * y;
     int result4 = x / y;
          if (s == '+')
          {
               printf("%i\n",result1);
          }
          if (s == '-')
          {
               printf("%i\n",result2);
          }
          if (s == '*')
          {
               printf("%i\n",result3);
          }
          if (s == '/')
          {
               printf("%i\n",result4);
          }
     }

}