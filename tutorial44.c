#include <stdio.h>
#include <string.h>
struct driver
{
    char name[200];
    char rout[200];
    int kms;
    char dl[200];
};

int main(int argc, char const *argv[])
{
    struct driver d1, d2, d3;
    printf(" there are many  driver work in a company but we have to print print only three driver information\n");
    printf("enter the name is first driver\n");
    scanf("%s", &d1.name);
    printf("enter the rout of first driver\n");
    scanf("%s", &d1.rout);
    printf(" enter the kms of first driver\n");
    scanf("%d", &d1.kms);
    printf("enter the dl no of first driver\n");
    scanf("%s", &d1.dl);

    printf("enter the name is second driver\n");
    scanf("%s", &d2.name);
    printf("enter the rout of second driver\n");
    scanf("%s", &d2.rout);
    printf(" enter the kms of second driver\n");
    scanf("%d", &d2.kms);
    printf("enter the dl no of second driver\n");
    scanf("%s", &d2.dl);

    printf("enter the name is thired driver\n");
    scanf("%s", &d3.name);
    printf("enter the rout of thired driver\n");
    scanf("%s", &d3.rout);
    printf(" enter the kms of thired driver\n");
    scanf("%d", &d3.kms);
    printf("enter the dl no of thired driver\n");
    scanf("%s", &d3.dl);

    printf("******* printing information ******\n");

    printf("name is %s\n", d1.name);
    printf("rout is %s\n", d1.rout);
    printf("kms is %d\n", d1.kms);
    printf("dl no %s\n", d1.dl);

    printf("name is %s\n", d2.name);
    printf("rout is %s\n", d2.rout);
    printf("kms is %d\n", d2.kms);
    printf("dl no %s\n", d2.dl);

    printf("name is %s\n", d3.name);
    printf("rout is %s\n", d3.rout);
    printf("kms is %d\n", d3.kms);
    printf("dl no %s\n", d3.dl);

    return 0;
}
