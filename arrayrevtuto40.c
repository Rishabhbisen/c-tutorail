#include <stdio.h>
#include <string.h>
void arrrev(int arr[])
{
    int temp;
    for (int  i = 0; i < 7/2; i++)
    { 
        
        temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp;
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("before printing the arry\n");
    for (int i = 0; i < 7; i++)
    {
        printf(" the arr value is %d is %d\n", i, arr[i]);
    }
    arrrev(arr);
    printf(" after printing the arry\n");

    for (int i = 0; i < 7; i++)
    { 
        printf(" the arr value is %d is %d\n", i, arr[i]);
    }

    printf(arr);
    return 0;
}
