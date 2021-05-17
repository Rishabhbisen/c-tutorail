#include<stdio.h>
void solid_rectangle(int n , int m)
{
    int i , j;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= m; j++)
        {
            printf("* ");

        }
 printf("\n");
    }
    
}
int main()
{ 
    int row , colume ;
   printf(" nenter number of row\n");
   scanf("%d",&row);
   printf(" nenter nuber of colume\n");
   scanf("%d",&colume);
 
   printf("\n");
   solid_rectangle(row,colume);
    return 0;
}