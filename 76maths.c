#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float est(int x1, int y1, int x2, int y2)
{
    int a = (y2 - y1) * (y2 - y1) - (x2 - x1) * (x2 - x1);
    return sqrt(a);
}

float areaofcercile(int x1, int x2, int y1, int y2, float(*distance)(int x1, int x2, int y1, int y2))
{
    return distance(x1, x2, y1, y2);
}

int main()
{

    int x1, x2, y1, y2;
    int yst;

    printf(" Enter the value of x1\n");
    scanf("%d", &x1);

    printf(" Enter the value of x2\n");
    scanf("%d", &x2);

    printf(" Enter the value of y1\n");
    scanf("%d", &y1);

    printf(" Enter the value of y2\n");
    scanf("%d", &y2);

    yst = areaofcercile(x1, x2 , y1 , y2 , est);
    printf(" the distance between two those fun is %d\n", yst);

    return 0;
}