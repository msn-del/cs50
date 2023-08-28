#include <stdio.h>
#include <cs50.h>
int main(void){
    long num1 = get_long ("num1: ");
    long  num2 = get_long("num2: ");
    long  result1 = num1 + num2;
    printf("%li\n", result1  );
    long  result2 = num1 * num2;
    printf("%li\n", result2  );
    long  result3 = num1 - num2;
    printf("%li\n", result3  );
    long  result4 = num1 / num2;
    printf("%li\n", result4  );
}