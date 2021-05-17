#include <stdio.h>
#include <string.h>

union  student
{

    int id;
    int mark;
    char fav_char;
    char name[34];
};

int main(int argc, char const *argv[])
{
    union  student s1;
    s1.id = 23;
    strcpy(s1.name, ("rishabh"));
    s1.fav_char = ('r');
    s1.mark = 400;


    printf("mark is %d\n", s1.mark);
    printf("id is %d\n", s1.id);
    printf("fav_char is %d\n",s1.fav_char);
    printf("the name is %s\n", s1.name);

    return 0;
}
