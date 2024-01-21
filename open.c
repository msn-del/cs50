#include<cs50.h>
#include<stdio.h>
int main (void)
{
    string question = get_string("do you want to open this app ?");
    if (question == "yes")
    {
        int password = get_int("the password: ");
        if (password == "4268")
        {
            printf("opened succefully.");
        }
    }
}