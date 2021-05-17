#include<stdio.h>
void hollow_rectangle(int n , int m)
{
    int i , j;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= m; i++)
        {
            if (i==1 || i==n || j==1 || j==m)
            {
                printf(" * ");
            }
            else
            {
                printf(" ");
            }
         
        printf("\n");
            
        }
        
    }
    
}
int main()
{
    int rows, colume;
    printf(" enter number of row");
    scanf("%d",&rows);
    printf("enter number of colume");
    scanf("%d",&colume);
   printf("\n");
    hollow_rectangle( rows, colume);


    
    return 0;
}