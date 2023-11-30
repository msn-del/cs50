#include<stdio.h>
#include<cs50.h>

void swap(int *a, int *b);
int main(void)
{
    int x = 1;
    int y = 2;
    swap(&x, &y);
    printf("x is: y is: %i%i\n", x, y);
    printf("x is: y is: %i%i\n", x, y);
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    temp = *b;
}