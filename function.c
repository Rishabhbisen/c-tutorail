#include<stdio.h>
int sum ( int a , int b)
{
   return a+b;
}

int printstar( int n )

    
{
   char i;
   
   for (int  i = 0; i < 7; i++)
   { 
       printf("%c\n",'*');
   }
   
   
    
   
}
int takenumber()
{   
    int i;
    printf(" enter any num\n");
    scanf("%d",&i);
    return i;
}
int main(int argc, char const *argv[])
{
    int a, b, c ,d;
    a = 4;
    b = 5;
    c = sum (a , b);
    printstar(7);
    d = takenumber();
    printf("the sum is %d\n", c);
   printf(" the entered num is %d", d);
    return 0;
}
