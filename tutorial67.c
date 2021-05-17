#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;


ptr = fopen("myfile.txt","w+");
    // char c = fgetc(ptr);
    // printf(" the character is %c\n", c);
    // fclose(ptr);

    // char str[4];
    // fgets(str, 5 ,ptr);
    // printf(" the string is %s\n",ptr);

    fputc('o',ptr);
    fputc(" this is rishabh",  ptr);

    return 0;
}
