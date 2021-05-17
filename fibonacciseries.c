#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0,b = 1, sum = 0, i, n;
    printf(" enter a number that you want to see in the febonicce series");
    scanf("%d\n",&n);

    printf("%d\t%d\t",a,b);

    while (sum<n)
    {

        sum = a+b;
        printf("%d\t",sum);
        
        a=b;
        b=sum;
    }
    


    return 0;
}
