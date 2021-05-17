#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("the value of array %d is %d\n", i, array[i]);
    }
    // array[1] = 345;
    return 0;
}
void func2(int *ptr)
{

    for (int i = 0; i < 5; i++)
    {
        printf("the value of array %d is %d\n", i, ptr[i]);
    }
    *(ptr + 2) = 223;
}
void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the value of array %d is %d\n", i, arr[i][j]);
        }
    }
}

int main()
{
    // int arr[] = {1, 3, 4, 5, 5};
    int arr[][2] = {{2, 4},
                    {5, 4}};
    // func1(arr);
    //printf(" the value at index 1  is %d\n", arr[1]);
    // func2(arr);
    //func2(arr);
    func3(arr);
    return 0;
}