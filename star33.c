#include <stdio.h>
void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void revesrsestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows, type;
    printf(" enter 0 to star pattern and 1 to restarpattern\n");
    scanf("%d",&type);
    printf(" how many rows do  you want to print\n");
    scanf("%d", &rows);
    starpattern(rows);

    switch (type)
    {
    case 0:
        starpattern(rows);
        break;

    case 1:
        revesrsestarpattern(rows);
        break;

    default:
        printf("you have enteredd invalied value");
        break;
    }

    return 0;
}