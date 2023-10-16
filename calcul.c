#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string names[4] = {"simo", "karima" , "salah" ,"nacer eddine"};
    string numbers[4] = {"0619981459", "0630201514", "0628241689", "0694160822"};
    for (int i = 0;i < 4; i++)
    {
     string name = get_string("which name: ");
             if(strcmp(names[i],name) == 0)
             {
                printf("%s\n",numbers[i]);
             }
  }
}