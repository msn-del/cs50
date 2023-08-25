#include <stdio.h>
#include <cs50.h>
int main(void){
     int answer = get_string("what is your name");
     printf("hello, %s\n",answer);
}