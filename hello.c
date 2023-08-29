#include<stdio.h>
#include<cs50.h>
void sum(int x, int y ){
    int result = x + y;
    printf("%i\n", result);
}
int main(void){
    sum(12 , 5);
}