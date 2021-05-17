#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    printf(" the value is %d", argc);
    for (int  i = 0; i < argc; i++)
    {
        printf(" the index number value  %d is a %s ", i , argv[i]);
    }
    

    return 0;
}
