#include<stdio.h>
#include<stdlib.h>

int sum( int a , int b)
{
    return a + b;
}

void hellouserexxetute(int (*ptr)(int , int))
{
    printf(" hello user\n");
    printf(" the 5 and 7 sum is %d\n", ptr( 5 ,7));
}

void gooduserexxetute(int (*ptr)(int , int))
{
    printf(" good mourning user\n");
    printf(" the 5 and 7 sum is %d\n", ptr( 5 ,7));
}

void eveninguserexxetute(int (*ptr)(int , int))
{
    printf(" good evening user\n");
    printf(" the 23 and 12 sum is %d\n", ptr( 23 ,12));
}



int main(int argc, char const *argv[])
{
    int (*ptr) (int , int );
    ptr = sum;
    hellouserexxetute(ptr);
    gooduserexxetute(ptr);
    return 0;
}
