#include<stdio.h>
void changevalue(int *a)
{
   *a = 2333;
}
int main()
{
    int a = 23;
    printf("the value is %d\n",a);
    changevalue(&a);
    printf("the value adrees is %d\n",a);
    return 0;
}