#include<stdio.h>

int main(int argc, char const *argv[])
{
   /* int a[ 5 ];
    printf(" enter the elimant of arry");
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the arry is the form of list");
    for (int  i = 0; i < 5; i++)
    {
        printf(" %d ", a[i]);
    }
    
    return 0; */

/*
    int a[2] [2];
    printf(" enter the elimant of arry");
    for (int  i = 0; i < 2; i++)
    {
        for (int  j = 0; j < 2; j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    
    
    printf("the arry is the form of matrix \n");
   for (int  i = 0; i < 2; i++)
   {
        for (int  j = 0; j < 2; j++)
    
        printf(" %d ", a[i][j]);
   
    
   printf("\n");
   
   }

   
    
    return 0; */
  
    int a[2] [2] [2] ;
    printf(" enter the elimant of arry");
    for (int  i = 0; i < 2; i++)
    {
        for (int  j = 0; j < 2; j++)
    {  
        for (int  k = 0; k < 2; k++)
        {
            scanf("%d",&a[i][j][k]);
        }
        
        
    }
    }
    
    
    printf("the arry is the form of matrix \n");
   for (int  i = 0; i < 2; i++)
   {
        for (int  j = 0; j < 2; j++)
    
    {   for (int  k = 0; k < 2; k++)
    
        printf("%d ", a [i][j][k]);
    
    
    }
    
   printf("\n");
   
   }

   
    
    return 0;
}


