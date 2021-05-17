#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a , i = 0;
    int *ptr;

    while (i<2323)
    {
        printf(" hello welcome to the rishabh programme\n");
        ptr = malloc(434234*sizeof(int));
       if (i%100==0)
       {
           getchar();
       }
       i++;
       free(ptr);
       
    }
    
     
    return 0;
}