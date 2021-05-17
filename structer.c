#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    int mark;
    char fav_char;
    char name[200];
};
int main(int argc, char const *argv[])
{
    struct student rishabh, bhupendra, baba;
    rishabh.id = 1;
    bhupendra.id = 2;
    baba.id = 3;
    rishabh.mark = 400;
    bhupendra.mark = 600;
    baba.mark = 790;
    rishabh.fav_char = 'a';
    bhupendra.fav_char = 'b';
    baba.fav_char = 'c';
    strcpy(rishabh.name, ("rishabh nick name is rishi\n "));
    printf("rishabh name is %s", rishabh.name);
    printf(" rishbah mark is %d\n", rishabh.mark);
    printf("rishabh id is %d\n",rishabh.id);
    printf("rishabh fav_char is %c\n",rishabh.fav_char);

    strcpy(bhupendra.name, ("bhupendra nick name is bhopu\n "));
    printf("bhupendra name is %s", bhupendra.name);
    printf(" bhupendra mark is %d\n", bhupendra.mark);
    printf("bhupendra id is %d\n",bhupendra.id);
    printf("bhupendra fav_char is %c\n",bhupendra.fav_char);

    strcpy(rishabh.name, ("baba nick name is baba\n "));
    printf("baba name is %s", baba.name);
    printf(" baba mark is %d\n", baba.mark);
    printf("baba id is %d\n",baba.id);
    printf("baba fav_char is %c\n",baba.fav_char);

    

    return 0;
}
