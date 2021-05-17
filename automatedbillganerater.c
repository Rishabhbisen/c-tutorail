#include <stdio.h>
#include <string.h>
#include<stdlib.h>


char *replaceword(const char *str, const char *oldword, const char *newnomber)
{
    char *resultstring;
    int i , count = 0;
    int newwordlenght = strlen(newwordlenght);
    int oldwordlenght = strlen(oldwordlenght);

    //Let count the number of the time old word occur in the string

    for ( i = 0; str[i]!='\0' ; i++)
    {
        if (strstr(&str[i], oldword)== &str[i])
        {
            count++;
            //jump over this word
            i = i + oldwordlenght;
        }
        
    }
       
       resultstring = (char*)malloc(i + count*( newwordlenght - oldwordlenght) +1);

       i = 0 ;
       while (*str )
       
       {
           if (strstr (str , oldword) == str)
           {
               strcpy(&resultstring[i], newnomber);
               i += newwordlenght;
               str += oldwordlenght;

           }
           else
           {
               resultstring[i] = *str;
               i+= 1;
               str+= 1;
           }
           
       }
       resultstring[i] = '\0';

    
}

int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;
     FILE *ptr2 = NULL;
    ptr = fopen("myfile.txt", "r");
    ptr2 = fopen("billgen.txt","w");
    char str[200];
    fgets(str, 200, ptr);
    printf(" The given bill templete was: %s\n", str);

    // Call the funncation

    char * newstr;
    newstr = replaceword(str , "{{item}}", " teble fan");
    newstr = replaceword(newstr , "{{outlat}}", " export and outport");
    newstr = replaceword(str , "{{name}}", " Rish");
    



    printf("The bill ganerater is : %s ", newstr);
    fprintf(ptr2 ,"%s",newstr);
    fclose(ptr);
    fclose(ptr2);

    return 0;
}
