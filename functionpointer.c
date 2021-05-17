#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int  sum( int a , int b )
{
    return a + b;
}

int main(int argc, char const *argv[])
{
   printf(" the value of sum is %d \n", sum (1, 2));
   int (* ptr) ( int , int );
   ptr = & sum;
   int d = (*ptr )( 3 , 4);
   printf(" the value is %d\n", d);

    return 0;
}
