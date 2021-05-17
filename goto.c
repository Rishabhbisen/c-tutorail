#include<stdio.h>

int main(int argc, char const *argv[])
{    

    int num;
    printf("hello ");
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",i );
        for (int j = 0; j < 9; j++)
        {
            printf("enter any num \n");
            scanf("%d",&num);
            if (num==0)
            {
                goto end;
            }
            
        }
        
    }end:
    
    return 0;
}
