#include<stdio.h>
int fib_recursive( int n )
{
    if (n==1 || n==2)
    {
        return n-1;
    }
    else
    {
        return fib_recursive(n-1) + fib_recursive(n+2);
    }
    return 0;
}

int fib_iterative(int n )
{
    int a = 0; 
     int b = 1;
     for (int  i = 0; i <n-1 ; i++)
     {
         b = a + b;
         a = b - a;
     }
     
     return 0;

}
int main(int argc, char const *argv[])
{
    int number;
    printf(" enter the fibonache series number \n");
    scanf("%d\n",&number);
    printf("the fibonache series number is %d \n using recursive aproach");
    printf(" the fibonache series no is %d \n using iterative aproach");
    return 0;
}
