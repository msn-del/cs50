#include <stdio.h>
#include <cs50.h>
int main(void){
    long num1 = get_int("num1: ");
    long  num2 = get_int("num2: ");
    long  result1 = num1 + num2;
    printf("%i\n", result1  );
    long  result2 = num1 * num2;
    printf("%i\n", result2  );
    long  result3 = num1 - num2;
    printf("%i\n", result3  );
    i result4 = num1 / num2;
    printf("%i\n", result4  );
}