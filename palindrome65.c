#include <stdio.h>
#include <stdlib.h>

int ispalindrome(int num)
{
    int reversed = 0;
    int orignalnober = num;
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    printf(" the reversed number is %d\n", reversed);

    if (orignalnober == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int number;
    printf(" Enter a nomber to check it is pelindrome or not\n");
    scanf("%d", &number);
    // if (ispalindrome(number))
    // {
    //     printf(" the number is pelindrome\n");
    // }
    // else
    // {
    //     printf(" the number is not pelindrome\n");
    // }
     ispalindrome((number));
    return 0;
}