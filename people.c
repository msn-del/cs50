#include<cs50.h>
#include<stdio.h>
#include<string.h>

typedef struct
{
    string name;
    string number;
}
  person;
  int main(void)
{
    person people[2];
    people[0].name = "carter";
    people[0].number = "0615201520";
    people[1].name = "david";
    people[1].number = "0613101578";

    string s = get_string("which one:");
    for(int i = 0; i < 2; i++)
    {
        if(strcmp(people[i].name, name) == 0)
        {
            printf("%s\n",people[i].name.number);
            return 0;
        }
    }
    return 1;
}