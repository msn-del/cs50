#include<stdio.h>
#include<cs50.h>

void swap(int *a, int *b);
int main(void)
{
    int x = 1;
    int y = 2;
    swap(&x, &y);
    printf("x is: %i\n", x);
    printf("y is: %i\n", y);
    printf("x is: %i\n", x);
    printf("y is: %i\n", y);
}
void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    temp = *a;
}