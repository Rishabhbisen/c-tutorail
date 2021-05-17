#include<stdio.h>

int main()
{
    // This is a short project
    int t , d,i;
    printf("  Do You kow what is current time and date  if you do not know please enter 't' for time and d for date \n");
    scanf("%d",&t,&d);
  
    // printf("the current time is %s\n",__TIME__);
    if (i>t)
    {
         printf("the current time is %s\n",__TIME__);
        
    }
    // else if (d)
    // {
    //       printf(" today date is %d",__DATE__);
    // }
    else
    {
        // printf(" you have entered wrong latter");
         printf(" today date is %s",__DATE__);
    }
    
    
   


  
  


    printf("the time is %s\n", __TIME__);
    printf(" date is %s\n",__DATE__);
    printf("the cruurent line is %d\n",__LINE__);
    printf("the current file  is %s\n",__FILE__);
    printf("ANSI: %d\n",__STDC__);
    return 0;
}