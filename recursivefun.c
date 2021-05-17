#include<stdio.h>
int factorial (int number)
{if ( number == 0 || number ==1)

    return 1;


    else
    
        return ( number * factorial ( number -1));

    
    

}
int main(int argc, char const *argv[])
{ 
     int num;
    
    printf(" enter the num you want to print factorial \n");
    scanf("%d",&num);
    printf(" the factorial of %d is %d ", num , factorial(num));
    return 0;
}
