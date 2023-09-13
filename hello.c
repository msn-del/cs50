#include<stdio.h>
#include<cs50.h>
int main(void){
     float salaire = get_float("salaire price: ");
     float sale = salaire * .85;
     printf(" %f\n", sale);
}