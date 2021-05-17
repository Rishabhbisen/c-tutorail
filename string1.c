#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
   // char str[200];
   // gets(str);
   // printf("%d", strlen(str));
  // char str[200]="gopal";
  // char str1[200]= " ram";
  // strcpy(str,str1);
 //  printf("%s",str);
// when we take value from the user 

//strcpy
   //char str1[200];
   //char str[200];
   //gets(str);
   //gets(str1);
   //strcpy(str,str1);
   //printf("%s",str);

   //strcmp
     // char s1[200];
     // char s2[200];
     // gets(s1);
     // gets(s2);
     // if (strcmp(s1,s2)==0)
     // {
     //     printf("string s1 and s2 are the same\n ");

     // }
     // else
     // {
     //     printf(" string s1 and s2 are not the same\n");
     // }

     //strcat
     //char baba[200] = "you are so beautifull";
     // char ba[200] =" and awesome------------------------------------";
    //  printf("%s",strcat(baba,ba));
      
      //strrev
      //char str[200] ="rishabh";
     // char str2[200] = " bisen";
     // printf("%s\n",strrev(str));
     // printf("%s",strrev(str2));

     /////strupr
   //  char s[223] ="bababa";
    // printf("%s",strupr(s));
     
     //strlwr
    // char aa[200];
    // gets(aa);
    // printf("%s",strlwr(aa));
   
   // cheak mobile nomber length
  // char mn[222];
  // printf("enter mobile no0ber\n");
  // gets(mn);
  // if (strlen(mn)==10)
  // {
  //     printf("mobile nober is right\n");
  // }
  // else
  // {
  //     printf("you have enter wrong mobile nober");
  // }

//login programme
char r[200] = "rishabhbisen2002@gmail.com";
char b[200] ="baba07";
char r1[200];
char b1[200];
printf("enter y6our usarname\n");
gets(r1);
printf(" enter your password\n");
gets(b1);
if (strcmp(r,r1)==0&&strcmp(b,b1)==0)
{
    printf("login succesfully\n");

}
else
{
    printf("you entered wrong password");
}

char s[200];
char rev[200];
printf("enter any sring\n");
gets(s);
strcpy(s,rev);
printf("%S",rev);
if (strcmp(s,rev)==0)
{
    printf("%s is pali.. string\n",s);
}
else
{
    printf("%s is not pali.. string\n");
}

char l[200];
  printf("enter any thing that you want to revers\n");
  gets(s);
  strrev(s);
  printf("the revers is \n");
  printf("%s",s);

   
   
   
   
   
    return 0;

}
