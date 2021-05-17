#include<stdio.h>
#include<stdlib.h>


int main()
{
    int chars ,i =0;
    char *ptr;
    char a, b; 

    while (i<3)
    {
        printf("enter the nomber of character in yoour employ id\n",i+1);
        scanf("%d",&chars);

        printf(" enter the value of a \n");
        scanf("%c",&a);
        getchar();

        printf(" enter the value of b\n");
        scanf("%c",&b);

        getchar();

        ptr = (char*)malloc((chars+1)*sizeof(char));

        printf("enter your employ id\n ");
        scanf("%s",ptr);

           printf(" your employ id %s\n",ptr);
           free(ptr);
  i = i+1;
    }
    
    
    
    
    
    return 0;
}