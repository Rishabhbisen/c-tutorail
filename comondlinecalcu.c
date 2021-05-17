#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char *argv[])
{
    char * opration;
    int num1, num2;
    opration = argv[1];
   num1 =atoi( argv[2]);
   num2 =atoi( argv[3]);

   if (strcmp(opration,"add")==0)
   {
      printf("%d\n",num1 + num2);
  }

   else  if (strcmp(opration,"subtract")==0)
   {
      printf("%d\n",num1-num2);
   }

    else if (strcmp(opration,"division")==0)
   {
      printf("%d\n",num1/num2);
   }

   else  if (strcmp(opration,"multifly")==0)
   {
      printf("%d\n",num1*num2);
   }

 
   



    return 0;
}
