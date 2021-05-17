# include<stdio.h>

int main(int argc, char const *argv[])
{
      
   int num , i =0 ;
    printf(" enter a num\n");
    scanf("%d",&num);
/*
    do
    {
        printf("%d\n", i );
        i = i + 1;

    } while (i < num);
    */
  
  
   do
   {
       printf(" %d", i*num);
       i++;
       
   } while (i <=10);
   



    return 0;
}
