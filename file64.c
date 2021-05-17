#include<stdio.h>

int main()
{
    FILE *ptr = NULL;
    char string[65] =" this costant is file64.c";

    //this is read the programme
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr , "%s" , string);
    // printf(" the file contant is %s ", string);

     ptr = fopen("myfile.txt", "w");
      fprintf(ptr , "%s" , string);

      // if we have to reead the programme than we will use fscanf 
      // and write the programme we will use f 

    return 0;
}