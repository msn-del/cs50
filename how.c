#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
 {
        int numbers[] = {54, 16, 14, 88, 59, 87};
    int n = get_int("which one: ");
    for(int i = 0; i < n; i++)
    {
        if(numbers[i] == n)
        {
            printf("found\n");
            return 0;
        }
    }
            printf("404\n");
        return 1;
}