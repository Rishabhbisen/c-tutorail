#include <stdio.h>
#include <string.h>


struct travel
{
    char name[30];
    char dl[30];
    char route[30];
    int kms;
};


int main()
{
    int n;
   
    printf("Enter how many driver working in your companies:\n");
    scanf("%d",&n);
    int i,j ,no;
    {
    struct travel m[no];
    for ( i = 1; i <= no; i++)
    {
        printf("--------------------------------------------\n");
        printf("Please enter your name:\n");
        fflush(stdin);
        gets(m[i].name);
        printf("Please enter your driving licence no:\n");
        fflush(stdin);
        gets(m[i].dl);
        printf("Please enter your route of driving:\n");
        fflush(stdin);
        gets(m[i].route);
        printf("Please enter how many km you traveled in our compny:\n");
        fflush(stdin);
        scanf("%d",&m[i].kms);
        printf("---------------------------------------------\n");
        printf("\n");
    }
    return 0;
}



}