#include <stdio.h>

int interchange(int *ptrx, int *ptry)
{
    int temp;
    temp = *ptrx;
    *ptrx = *ptry;
    *ptry = temp;
}
int main()
{
    int a, b;
    printf(" enter number that you want to input or interchange\n ");
    scanf("%d\n %d\n ", &a, &b);

    interchange(&a, &b);
    printf("a = %d\n b = %d\n ", a, b);
}

/*
#include<stdio.h>
void swap( int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
return;
}
int main()
{
int a =23, b = 34;
printf(" %d and %d\n",a ,b);
swap(&a ,&b);
printf("%d and %d", a , b);
    return 0;
}*/