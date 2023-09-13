#include<stdio.h>
#include<cs50.h>
int main(void){
     float salaire = get_float("salaire price: ");
     float sale = salaire * .85;
     printf(" %.2f\n", sale);
}