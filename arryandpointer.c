#include<stdio.h>

int main()
{
    //thi is example
    //char a ='23';
    //char *p=&a;
    //printf("%d\n",p);
    //p++;
    //printf("%d\n",p);
    //printf("%d\n",p+7);
    //p--;
    //printf("%d\n",p);
    
    int arr [] = {11,23,14,5,6,7,8};
    printf(" the value of the first adress is %d\n",&arr[0]);
        printf(" the value of the first adress is %d\n",arr);
            printf(" the value of the first adress is %d\n",arr+2);
    printf(" the value of the first adress is %d\n",*(&arr[0]));


     printf(" the value of the first adress is %d\n",arr[0]);
      printf(" the value of the first adress is %d\n",&arr[2]);
       printf(" the value of the first adress is %d\n",arr[2]);
    
    return 0;
}