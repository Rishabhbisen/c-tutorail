#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("lets learn about pointer\n");
    int a =21;
    int *ptra = &a;
    int *ptr3;
    int *ptr2 = NULL;
    printf("the adress of a is %p\n",&a);
    printf("the value of a is %d\n",*ptra);
    printf("the adress of a is %p\n",ptra);
      printf("the value of a is %d\n",a);
      printf("the aDRESS OF any garbage is %p\n",&ptr3);
printf("the adress of any garbage  is %p\n",NULL);

//add

    return 0;
}
