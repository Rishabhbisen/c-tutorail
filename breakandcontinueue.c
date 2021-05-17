#include <stdio.h>

int main(int argc, char const *argv[])
{

    int i, age;
    printf("hello");

    for (i = 0; i < 10; i++)
    {
         printf("%d\n enter your age\n", i);
        scanf("%d", &age);
        
    

    if (age>10)
    {
    
        continue;
    }
     printf("hello");
    
    }
    return 0;
}
