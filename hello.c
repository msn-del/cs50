#include <stdio.h>
#include <cs50.h>
int main(void){
    int num1 = get_int("num1: ");
    int num2 = get_int("num2: ");
    int result1 = num1 + num2;
    printf("%i\n", result1  );
    int result2 = num1 * num2;
    printf("%i\n", result2  );
    int result3 = num1 - num2;
    printf("%i\n", result3  );
    int result4 = num1 / num2;
    printf("%i\n", result4  );
}