#include<stdio.h>



int main(){
    int h , m , s ,l;
    //int d = 1000;//we can deley the programme at 1000
    printf("set time:\n ");
    scanf(" %d%d%d" ,&h,&m,&s  );
    
    if(h>12 || m>60 || s>60)
    {
        printf("ERROR ! \n");
        exit( 0);
    }
    
    while(l)// this is infinity loop anything inside repest again and again
    {
        s++;
        if(s>59)
        {
            m++;
            s = 0;
        }
        if(m>59)
        {
            h++;
            m = 0;
        }
        if(h>12)
        {
            h = 1;
        }
        printf("clock: \n ");
        printf("%02d:%02d:%02d\n ",h,m,s);// this write our time formate 00:00:00
     // sleep(d);// the function sleep slow down the while loop and make it real clock
    system("cls ");// clear the screen
        
    }
    
}  
    
