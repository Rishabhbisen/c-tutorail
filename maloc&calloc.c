
#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{/*
    int *ptr;
    int n;

    ptr = (int*) malloc(n*sizeof(int));

    scanf("%d",&n);
   
    for (int i = 0; i < n; i++)
    {
        printf(" enter the value of the %d is the array\n",i);
        scanf("%d",&ptr[i]);
    }
    
   for (int  i = 0; i < n   ; i++)
   {
       printf("%d %d\n", i, ptr[i]);
   }
   
    */



// the use of calloc
/*
    int *ptr;
    int n;

    ptr = (int*) calloc(n ,sizeof(int));

    scanf("%d",&n);
   
    for (int i = 0; i < n; i++)
    {
        printf(" enter the value of the %d is the array\n",i);
        scanf("%d",&ptr[i]);
    }
    
   for (int  i = 0; i < n   ; i++)
   {
       printf("%d %d\n", i, ptr[i]);
   }
   
    */
   int *ptr;
    int n;

    ptr = (int*) calloc(n ,sizeof(int));

    scanf("%d",&n);
   
    for (int i = 0; i < n; i++)
    {
        printf(" enter the value of the %d is the array\n",i);
        scanf("%d",&ptr[i]);
    }
    
   for (int  i = 0; i < n   ; i++)
   {
       printf("%d %d\n", i, ptr[i]);
   }
   
  

    ptr = (int*) realloc(ptr ,n*sizeof(int));

    scanf("%d",&n);
   
    for (int i = 0; i < n; i++)
    {
        printf(" enter the value of the %d is the array\n",i);
        scanf("%d",&ptr[i]);
    }
    
   for (int  i = 0; i < n   ; i++)
   {
       printf("%d %d\n", i, ptr[i]);
   }
   
   ptr = (int*) realloc(ptr ,n*sizeof(int));

    scanf("%d",&n);
   
    for (int i = 0; i < n; i++)
    {
        printf(" enter the value of the %d is the array\n",i);
        scanf("%d",&ptr[i]);
    }
    
   for (int  i = 0; i < n   ; i++)
   {
       printf("%d %d\n", i, ptr[i]);
   }






    return 0;
}
