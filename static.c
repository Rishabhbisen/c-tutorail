#include <stdio.h>

int fun(int b)
{
    static int a = 0;
    printf(" the value of a is %d\n",a);
    a++;
   // printf(" the aress of b is %d\n",&b);
    return b+a;
}
int main()
{
    int b = 344;
    // printf(" the aress of b is %d\n",&b);
    int val = fun(b);
    for (int  i = 0; i <= 6; i++)
    {
        val = fun(b);
    }
    
    int *ptr = &val;

   // printf(" the value of b is %d", val);

    return 0;
}